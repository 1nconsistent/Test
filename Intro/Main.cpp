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
	int condi;
	float a, b;
	InitLog();
	std::cout << "\nDo you want to multiply(1) or divide(2)?" << std::endl;
	std::cin >> condi;
	if (condi == 1)
	{
		Log("Give 2 numbers to multiply");
		std::cin >> a >> b;
		float c = (Multiply(a, b)); //Breakpoint1
		std::cout << "Value: " << c << std::endl;
	}
	else if (condi == 2)
	{
		Log("Give 2 numbers to divide");	//Breakpoint2
		int d1, d2;
		std::cin >> d1 >> d2;
		int Div = Divide(d1, d2);
		std::cout << "Div: " << Div << std::endl;
	}
	else
	{
		Log("Invalid option \n Here's a random output:");
		int ad[] = { 5,3,2,4,3,6 };
		std::cout << "Array of Numbers: " << std::endl;
		for (int i = 0; i < 6; i++)
		{
			std::cout << ad[i] << std::endl;
		}
		const char* aag = "Quadratini";
		for (int i = 0; i < 10; i++)
		{
			std::cout << aag[i] << std::endl;
		}
	}
}