#include "acpch.h"
#include "AcrylicGUI/Renderer/RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace AcrylicGUI
{
	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();
}