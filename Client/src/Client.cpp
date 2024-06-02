#include <Pointscape.h>

class Client : public Pointscape::Application {
public:
	Client() {}
	~Client() {}
};

Pointscape::Application* Pointscape::CreateApplication() {
	return new Client();
}