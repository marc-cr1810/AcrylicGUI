#include "acpch.h"
#include "AcrylicGUI/Core/Window.h"

#ifdef AC_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsWindow.h"
#endif

namespace AcrylicGUI
{

	Scope<Window> Window::Create(const WindowProps& props)
	{
#ifdef AC_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
#else
		AC_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}

}