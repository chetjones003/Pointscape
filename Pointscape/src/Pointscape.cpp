#include "Pointscape.h"

int main() {
	Pointscape::Log::Init();
	POINTSCAPE_CORE_INFO("Engine initialized successfully.");
	POINTSCAPE_INFO("Client is rendering.");

	Pointscape::Application* app = new Pointscape::Application();
	app->Run();
	delete app;
}
