#include <iostream>
#include "Log.h"

void InitLog();
float Multiply(float, float);

int Divide(int da, int db)
{
	return da / db;
}

int main()
{
	float a;
	float b = 3.5;
	InitLog();
	std::cin >> a;
	float c = (Multiply(a, b)); //Breakpoint1
	std::cout << c << std::endl;
	a = 12.5;
	c = Multiply(a, b);
	std::cout << c << std::endl;
	Log("Divide now you idiot");	//Breakpoint2
	int d1, d2;
	std::cin >> d1 >> d2;
	int Div = Divide(d1, d2);
	std::cout << "Div: " << Div << std::endl;
	Log("Hello, testing 123");
}