#include <iostream>
#include "Log.h"

void Log(const char*);
int Multiply(int, int);

int main()
{
	int a, b;
	std::cin >> a >> b;
	int c = (Multiply(a, b));
	std::cout << c << std::endl;
	Log("Hello, testing 123");
}