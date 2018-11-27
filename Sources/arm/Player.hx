package arm;

import armory.trait.physics.RigidBody;
import iron.math.Vec3;
import iron.object.BoneAnimation;
import iron.object.Object;
import iron.math.Vec4;

class Player extends iron.Trait {
	@prop
	var speed:Float = 3;
	var animation:BoneAnimation;
	var armatureProxy:Object;
	var armature:Object;
	var body:RigidBody;

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
		armature = object.getChild("Armature");
		armatureProxy = object.getChild("ArmatureProxy");
		body = object.getTrait(RigidBody);
		animation = findAnimation(armature);
		animation.play("Idle");
	}

	function update() {
		if (!body.ready)
			return;

		body.syncTransform();
		body.activate();

		var kb = iron.system.Input.getKeyboard();

		var dirX = 0;
		var dirY = 0;

		// Move player
		if (kb.down("a")) {
			dirX = -1;
		}
		if (kb.down("d")) {
			dirX = 1;
		}
		if (kb.down("w")) {
			dirY = -1;
		}
		if (kb.down("s")) {
			dirY = 1;
		}

		if (dirX != 0 || dirY != 0) {
			var angle = 0;
			animation.play("Walk");

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
		} else {
			body.setLinearVelocity(0, 0, 0);
			animation.play("Idle");
		}
	}

	public function new() {
		super();

		notifyOnInit(init);
		notifyOnUpdate(update);
	}
}
