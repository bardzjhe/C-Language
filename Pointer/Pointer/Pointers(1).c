#include <stdio.h>
int main()
{
	double a, * pd;
	char b;
	void *data;
	/*At this point, the variable pd does not yet have a defined value*/
	a = 3.14;
	pd = &a;
	/*We assign it a value by means of the reference operator &, which is a unary operator returning
	the address of the operand on its right*/
	// After assignment the variable pd, occupying 4 byte on a 32 bit architecture, contains the address the memory location
	printf("the address of a is %p\n", &pd);
	b = "Hello world";
	data = &b;
	
	printf("%s\n", &data);// 有問題

	// It's possible to define a pointer to the void type 無類型變量
	return 0;
}