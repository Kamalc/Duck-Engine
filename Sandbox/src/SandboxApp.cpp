#include "Duck.h"

class Sandbox : public Duck::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
	

};

Duck::Application* Duck::CreateApplication()
{
	return new Sandbox();
}