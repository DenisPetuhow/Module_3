#pragma once
#ifdef LEAVER_EXPORTS
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