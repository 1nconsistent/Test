#include <iostream>
#include "Log.h"
#include "MathCustom.h"

int main()
{
	int condi;
	char asd = 'Y';
	float a, b;
	do
	{
		std::cout << "Select an operation:\n1. Multiply\n2. Divide\n3. Add\n4. Subtract\n5. Modulus\n6. Exit\n";
		std::cin >> condi;
		if (condi >= 1 && condi <= 5)
		{
			std::cout << "Enter two numbers: ";
			std::cin >> a >> b;
			switch (condi)
			{
			case 1:
				std::cout << "Product: " << Multiply(a, b) << std::endl;
				break;
			case 2:
				std::cout << "Quotient: " << Divide(a, b) << std::endl;
				break;
			case 3:
				std::cout << "Sum: " << Add(a, b) << std::endl;
				break;
			case 4:
				std::cout << "Difference: " << Subtract(a, b) << std::endl;
				break;
			case 5:
				std::cout << "Remainder: " << Modulus(a, b) << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "Exiting program" << std::endl;
			break;
		}
	} while (condi != 6);
}