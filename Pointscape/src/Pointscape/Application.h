#pragma once

#include "Core.h"

namespace Pointscape {

	class POINTSCAPE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}
