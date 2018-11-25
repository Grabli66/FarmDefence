package arm;

import iron.math.Vec3;
import iron.object.BoneAnimation;
import iron.object.Object;
import iron.math.Vec4;

class Player extends iron.Trait {
	var direction:Vec3;
	var speed:Float = 0.035;
	var animation:BoneAnimation;
	var armature:Object;

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
		direction = new Vec3(0, 0, 0);
		armature = object.parent;
		animation = findAnimation(armature);
		animation.play("Idle");
	}

	public function new() {
		super();

		notifyOnInit(init);

		notifyOnUpdate(() -> {
			var kb = iron.system.Input.getKeyboard();

			var dirX = 0;
			var dirY = 0;

			// Move player
			if (kb.down("a")) {
				dirX = -1;
				dirY = -1;
			}
			if (kb.down("d")) {
				dirX = 1;
				dirY = 1;
			}
			if (kb.down("w")) {
				dirX = -1;
				dirY = 1;
			}
			if (kb.down("s")) {
				dirX = 1;
				dirY = -1;
			}

			if (dirX != 0 || dirY != 0) {
				var angle = 0;
				animation.play("Walk");

				if (dirX == -1 && dirY == -1)
					angle = -135;

				if (dirX == 1 && dirY == 1)
					angle = 45;

				if (dirX == -1 && dirY == 1)
					angle = 135;

				if (dirX == 1 && dirY == -1)
					angle = -45;

				object.transform.rot.fromAxisAngle(Vec4.yAxis(), (angle * Math.PI) / 180);
				armature.transform.loc.x += dirX * speed;
				armature.transform.loc.y += dirY * speed;
				armature.transform.dirty = true;
			} else {
				animation.play("Idle");
			}

			return true;
		});
	}
}
