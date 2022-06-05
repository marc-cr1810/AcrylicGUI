#pragma once

#include "AcrylicGUI/Core/Base.h"
#include "AcrylicGUI/Core/Timestep.h"
#include "AcrylicGUI/Events/Event.h"

namespace AcrylicGUI
{
	class Layer
	{
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() { }
		virtual void OnDetach() { }
		virtual void OnUpdate(Timestep ts) { }
		virtual void OnImGuiRender() {}
		virtual void OnEvent(Event& event) { }

		const std::string& GetName() const { return m_DebugName; }
	private:
		std::string m_DebugName;
	};

}