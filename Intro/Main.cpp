#include <iostream>
#include "Log.h"

void Log(const char*);
void InitLog();
float Multiply(float, float);

int main()
{
	float a;
	float b = 3.5;
	InitLog();
	std::cin >> a;
	float c = (Multiply(a, b));
	std::cout << c << std::endl;
	a = 12.5;
	c = Multiply(a, b);
	std::cout << c << std::endl;
	Log("Hello, testing 123");
}