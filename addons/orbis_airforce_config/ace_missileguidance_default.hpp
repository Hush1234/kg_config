		class ace_missileguidance {
			enabled = 0;

			// minDeflection = 0.0005;	 	// Minium flap deflection for guidance
			// maxDeflection = 0.01;	 	// Maximum flap deflection for guidance
			// incDeflection = 0.0005;		// The incrmeent in which deflection adjusts.

			canVanillaLock = 1;			// Can this default vanilla lock? Only applicable to non-cadet mode

			// Guidance type for munitions
			// defaultSeekerType = "SALH";
			// seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

			// defaultSeekerLockMode = "LOAL";
			// seekerLockModes[] = { "LOAL", "LOBL" };

			seekLastTargetPos = 1;	 	// seek last target position [if seeker loses LOS of target, continue to last known pos]
			seekerAngle = 180;		 	// Angle in front of the missile which can be searched
			seekerAccuracy = 1;			// seeker accuracy multiplier

			seekerMinRange = 1;
			seekerMaxRange = 16000;		// Range from the missile which the seeker can visually search

			// Attack profile type selection
			defaultAttackProfile = "orbis_default";
			attackProfiles[] = {"orbis_default"};
		};