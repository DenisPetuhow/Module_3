#include "Greeter.h"
namespace StaticAnswer
{
	std::string Greeter::greet(const std::string& name) {
		return "Привет, " + name + "!";
	}
}
