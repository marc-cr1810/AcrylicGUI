#include "acpch.h"
#include "AcrylicGUI/Renderer/GraphicsContext.h"

#include "AcrylicGUI/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace AcrylicGUI
{

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    AC_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		AC_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}