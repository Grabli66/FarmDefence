package arm;

import iron.system.Input.Keyboard;
import iron.system.Input.Mouse;
import iron.system.Input;
import armory.trait.physics.RigidBody;
import iron.math.Vec3;
import iron.object.BoneAnimation;
import iron.object.Object;
import iron.math.Vec4;

/**
 * State of player
 */
enum PlayerState {
	Idle;
	Walk;
	Strike;
	Die;
}

/**
 * Player controller
 */
class Player extends iron.Trait {
	/**
	 * Speed of walk
	 */
	@prop
	var speed:Float = 3;

	/**
	 * State of player
	 */
	var playerState:PlayerState;
	var animation:BoneAnimation;

	/**
	 * To rotate armature
	 */
	var armatureProxy:Object;

	/**
	 * Bones
	 */
	var armature:Object;

	/**
	 * Slot for weapon
	 */
	var weaponPlace:Object;

	/**
	 * Rigid body
	 */
	var body:RigidBody;
	var keyboard:Keyboard;
	var mouse:Mouse;

	function findAnimation(o:Object):BoneAnimation {
		if (o.animation != null)
			return cast o.animation;
		for (c in o.children) {
			var co = findAnimation(c);
			if (co != null)
				return co;
		}
		return null;
	}

	function init() {
		mouse = Input.getMouse();
		keyboard = Input.getKeyboard();

		weaponPlace = object.getChild("Arm");
		armature = object.getChild("Armature");
		armatureProxy = object.getChild("ArmatureProxy");
		body = object.getTrait(RigidBody);
		animation = findAnimation(armature);
		setState(PlayerState.Idle);
	}

	/**
	 * Fix weapon position and rotation for strike
	 */
	function armWeapon() {
		weaponPlace.transform.rot.fromAxisAngle(Vec4.yAxis(), 90 * Math.PI / 180);
	}

	/**
	 * Fix weapon position and rotation for other states than strike
	 */
	function disarmWeapon() {
		weaponPlace.transform.rot.fromAxisAngle(Vec4.yAxis(), Math.PI / 180);
	}

	/**
	 * Set state of player
	 * @param state
	 */
	function setState(state:PlayerState) {
		playerState = state;

		switch (playerState) {
			case PlayerState.Idle:
				animation.play("Idle");
				body.setLinearVelocity(0, 0, 0);
			case PlayerState.Walk:
				animation.play("Walk");
			case PlayerState.Strike:
				armWeapon();
				animation.play("Strike", () -> {
					disarmWeapon();
					setState(PlayerState.Idle);
				}, 0, 1);
				body.setLinearVelocity(0, 0, 0);
			default:
		}
	}

	function update() {
		if (!body.ready)
			return;

		body.syncTransform();
		body.activate();

		var dirX = 0;
		var dirY = 0;

		// Move player
		if (keyboard.down("a")) {
			dirX = -1;
		}
		if (keyboard.down("d")) {
			dirX = 1;
		}
		if (keyboard.down("w")) {
			dirY = -1;
		}
		if (keyboard.down("s")) {
			dirY = 1;
		}

		if (mouse.down("left") && playerState != PlayerState.Strike) {
			setState(PlayerState.Strike);
		}

		if (playerState == PlayerState.Idle || playerState == PlayerState.Walk) {
			if (dirX != 0 || dirY != 0) {
				var angle = 0;

				var dx = 0;
				var dy = 0;
				// Right && Bottom
				if (dirX == 1 && dirY == 1) {
					dx = 1;
					// Left && Bottom
				} else if (dirX == -1 && dirY == 1) {
					dy = -1;
					angle = -90;
					// Right && Top
				} else if (dirX == 1 && dirY == -1) {
					dy = 1;
					angle = 90;
					// Left && Top
				} else if (dirX == -1 && dirY == -1) {
					dx = -1;
					angle = 180;
					// Left
				} else if (dirX == -1) {
					dx = -1;
					dy = -1;
					angle = -135;
					// Right
				} else if (dirX == 1) {
					dx = 1;
					dy = 1;
					angle = 45;
				}
				// Top
				else if (dirY == -1) {
					dx = -1;
					dy = 1;
					angle = 135;
				}
				// Bottom
				else if (dirY == 1) {
					dx = 1;
					dy = -1;
					angle = -45;
				}

				armatureProxy.transform.rot.fromAxisAngle(Vec4.zAxis(), (angle * Math.PI) / 180);

				body.setLinearVelocity(dx * speed, dy * speed, 0);
				body.setAngularFactor(0, 0, 0);
				setState(PlayerState.Walk);
			} else {
				setState(PlayerState.Idle);
			}
		}
	}

	public function new() {
		super();

		notifyOnInit(init);
		notifyOnUpdate(update);
	}
}
