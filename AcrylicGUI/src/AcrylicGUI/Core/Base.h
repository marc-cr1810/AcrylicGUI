#pragma once

#include <memory>

#include "AcrylicGUI/Core/PlatformDetection.h"

#ifdef AC_DEBUG
#if defined(AC_PLATFORM_WINDOWS)
#define AC_DEBUGBREAK() __debugbreak()
#elif defined(AC_PLATFORM_LINUX)
#include <signal.h>
#define AC_DEBUGBREAK() raise(SIGTRAP)
#else
#error "Platform doesn't support debugbreak yet!"
#endif
#define AC_ENABLE_ASSERTS
#else
#define AC_DEBUGBREAK()
#endif

#define AC_EXPAND_MACRO(x) x
#define AC_STRINGIFY_MACRO(x) #x

#define BIT(x) (1 << x)

#define AC_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

namespace AcrylicGUI
{
	template<typename T>
	using Scope = std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> CreateScope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using Ref = std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> CreateRef(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
}

#include "AcrylicGUI/Core/Log.h"
#include "AcrylicGUI/Core/Assert.h"