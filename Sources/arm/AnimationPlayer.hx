package arm;

class AnimationPlayer extends iron.Trait {
	function getAnim() {
		// Trait placed on mesh object
		var anim = object.animation;
		// Trait placed on armature object - retrieve animation from child mesh
		if (anim == null)
			anim = object.children[0].animation;
		return anim;
	}

	public function new() {
		super();

		notifyOnInit(() -> {
			var anim = getAnim();
			anim.play("Empty");
		});

		notifyOnUpdate(function() {
			var kb = iron.system.Input.getKeyboard();

			var anim = getAnim();

			if (kb.started("1"))
				anim.play("Idle");
			if (kb.started("2"))
				anim.play("Empty");
		});
	}
}
