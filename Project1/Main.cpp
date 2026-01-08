#include <iostream>
void Log(const char*);
int Add(int, int);
int main()
{
	int a, b;
	std::cin >> a >> b;
	int c = (Add(a, b));
	std::cout << c << std::endl;
	Log("Hello, testing 123");
	getchar();
}
