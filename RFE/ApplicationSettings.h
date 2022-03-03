#pragma once
#include "Application.h"

namespace rfe
{
	// Separation of Settings from Application class
	class RFE_API Application::Settings {
	public:
		Application::Settings() = default;

		const Color& GetClearColor() const;
		void SetClearColor(const Color& value);
		int GetTargetFPS() const;
		// Set to define at what FPS the Application will try to run. Set to -1 to let Application run as fast as possible.
		// (Remember if vsync is on, Application will just keep running at Monitor Refresh Rate.
		void TargetFPS(int value);
		bool HasVsync() const;
		// Enable to set FPS to Monitor Refresh Rate.
		void SetVsync(bool value);
		int GetForceStopKey() const;
		void SetForceStopKey(int value);

	private:
		Color clearColor = RAYWHITE;
		int targetFPS = -1;
		bool vsync = false;
		int forceStopKey = KEY_NULL;
	};
}