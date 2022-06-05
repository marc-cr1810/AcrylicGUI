#pragma once

#include <glm/glm.hpp>

#include "AcrylicGUI/Core/KeyCodes.h"
#include "AcrylicGUI/Core/MouseCodes.h"

namespace AcrylicGUI
{
	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};
}