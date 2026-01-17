#include "Log.h"

float Multiply(float a, float b)
{
	return a * b;
}
float Divide(float a, float b)
{
	return a / b;
}
float Add(float a, float b)
{
	return a + b;
}
float Subtract(float a, float b)
{
	return a - b;
}
float Modulus(float a, float b)
{
	return static_cast<int>(a) % static_cast<int>(b);
}