package arm;

import iron.math.Vec4;

class Player extends iron.Trait {
	var speed:Float = 0.03;

	public function new() {
		super();

		// notifyOnInit(function() {
		// });

		notifyOnUpdate(() -> {
			var kb = iron.system.Input.getKeyboard();
			
			// Move player
			if (kb.down("a")) {
				object.transform.loc.x -= speed;
				object.transform.loc.y -= speed;
				//object.transform.rot.fromAxisAngle(Vec4.zAxis(), (90 * Math.PI) / 180);
				object.transform.dirty = true;
			}
			if (kb.down("d")) {
				object.transform.loc.x += speed;
				object.transform.loc.y += speed;
				object.transform.dirty = true;
			}
			if (kb.down("w")) {
				object.transform.loc.y += speed;
				object.transform.loc.x -= speed;
				object.transform.dirty = true;
			}
			if (kb.down("s")) {
				object.transform.loc.y -= speed;
				object.transform.loc.x += speed;
				object.transform.dirty = true;
			}
		});

		// notifyOnRemove(function() {
		// });
	}
}
