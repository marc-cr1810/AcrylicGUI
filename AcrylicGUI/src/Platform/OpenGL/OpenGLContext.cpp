#include "acpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace AcrylicGUI
{
	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		AC_CORE_ASSERT(windowHandle, "Window handle is null!");
	}

	void OpenGLContext::Init()
	{
		glfwMakeContextCurrent(m_WindowHandle);
		//int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		int status = glewInit();
		AC_CORE_ASSERT(status, "Failed to initialize Glew!");

		//AC_CORE_INFO("OpenGL Info: {0} {1}", glGetString(GL_VENDOR), glGetString(GL_RENDERER));
		//AC_CORE_INFO("  Vendor:	{0}", glGetString(GL_VENDOR));
		//AC_CORE_INFO("  Renderer:	{0}", glGetString(GL_RENDERER));
		//AC_CORE_INFO("  Version:	{0}", glGetString(GL_VERSION));
	}

	void OpenGLContext::SwapBuffers()
	{
		glfwSwapBuffers(m_WindowHandle);
	}
}