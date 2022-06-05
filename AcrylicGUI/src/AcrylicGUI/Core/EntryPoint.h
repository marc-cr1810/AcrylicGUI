#pragma once
#include "AcrylicGUI/Core/Base.h"
#include "AcrylicGUI/Core/Application.h"

#ifdef AC_PLATFORM_WINDOWS

extern AcrylicGUI::Application* AcrylicGUI::CreateApplication(ApplicationCommandLineArgs args);

int main(int argc, char** argv)
{
	AcrylicGUI::Log::Init();
	AC_CORE_INFO("Initialized Log!");

	auto app = AcrylicGUI::CreateApplication({ argc, argv });
	app->Run();
	delete app;
}

#endif