#pragma once

#include "Core.h"

namespace Duck {
	class DUCK_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in Client 
	Application* CreateApplication();
}
