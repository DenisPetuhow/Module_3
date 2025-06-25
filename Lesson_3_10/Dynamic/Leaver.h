#pragma once
#ifdef DYNAMIC_EXPORTS //”казываетс€ им€ библиотеки capslook
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif
#include <string>
namespace DynamicAnswer
{
	class MATHPOWERLIBRARY_API Leaver
	{
	public:
		 std::string leave(const std::string& name);

	};

}

