#include "acpch.h"
#include <AcrylicGUI.h>
#include "AcrylicGUI/Core/EntryPoint.h"

namespace AcrylicGUI 
{
	class TestApp : public Application
	{
	public:
		TestApp(ApplicationCommandLineArgs args)
			: Application("Test App", args)
		{

		}

		~TestApp()
		{}
	};

	Application* AcrylicGUI::CreateApplication(ApplicationCommandLineArgs args)
	{
		return new TestApp(args);
	}
}