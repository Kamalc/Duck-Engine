#pragma once


#ifdef DC_PLATFORM_WINDOWS

extern Duck::Application* Duck::CreateApplication();

int main(int argc, char** argv)
{
	printf("Duck Engine !");
	auto app = Duck::CreateApplication();
	app->Run();

	delete app;


}

#endif