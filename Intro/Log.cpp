#include <iostream>
#include "Log.h"

void InitLog()
{
	Log("Log initialized");
}
void Log(const char* message)
{
	std::cout << message << std::endl;
}