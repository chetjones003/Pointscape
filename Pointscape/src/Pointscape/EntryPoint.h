#pragma once

#ifdef POINTSCAPE_PLATFORM_WINDOWS

extern Pointscape::Application* Pointscape::CreateApplication();

int main(int argc, char** argv) {
	printf("Pointscape Engine Started");
	auto app = Pointscape::CreateApplication();
	app->Run();
	delete app;
}

#endif
