#include <iostream>
#include "Log.h"
#include "MathCustom.h"

int main()
{
	char c = 'Y';
	do
	{
		Log("Working with pointers");
		int* x = new int(10);
		int* y = new int(20);
		Log("Enter two numbers: ");
		std::cin >> *x;
		std::cin >> *y;
		std::cout << "Memory Address of x: " << x << " Value at x: " << *x << std::endl;
		std::cout << "Memory Address of y: " << y << " Value at y: " << *y << std::endl;
		char s = 'a';
		for (; s != 'N' && s != 'n'; )
		{
			int a = *x + *y;
			std::cout << "Sum of values: " << a << std::endl;
			*x = a;
			*y = *x;
			std::cout << "New value at x: " << *x << std::endl;
			std::cout << "New value at y (address of x): " << *y << std::endl;
			Log("Do you want to continue adding? (Y/N): ");
			std::cin >> s;
		}
		delete x;
		delete y;
		std::cout << "Do you want to repeat? (Y/N): " << std::endl;
		std::cin >> c;
	} while (c == 'Y' || c == 'y');

	int condi;
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