#include "Greeter.h"
namespace Answer
{
	std::string Greeter::greet(const std::string& name) {
		return "Привет, " + name + "!";
	}
}
