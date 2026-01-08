#include <iostream>
void Log(const char*);
int Add(int, int);
int main()
{
	int a = (Add(3, 4));
	std::cout << a << std::endl;
	Log("Hello, testing 123");
	getchar();
}
