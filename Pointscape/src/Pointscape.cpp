#include "Pointscape.h"

int main() {
	printf("Pointscape Engine Started");
	auto app = Pointscape::CreateApplication();
	app->Run();
	delete app;
}
