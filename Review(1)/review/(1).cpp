
#include <iostream>//Improve program readability
// <iostream>是C++的头文件库

/* #include <filename> means:
– To add the contents of the library file – filename to the source program during preprocessing
– < > means to find the library file in the default location
*/
using namespace std;
int main() {
	cout << "Hello World!\n" << endl;  
	// cout --> connected to scream
	// << --> Stream insertion operator
	// Value on the right-hand side (right operand) 
	// inserted into output stream

	/*
	\n Newline
	\t Horizontal tab Move the screen cursor to the next tab stop.
	另一种解释是把当前字符串长度补全到8的整数倍
	\r Carriage return  回车
	\a Alert 响铃
	\\ used to print a backslash character
	\" used to print a double quote character
	*/

	// Can declare several variables of the same type in one declaration

	// >> (stream extraction operator 流提取运算符
	// cin C++ 中标准输入流对象
	int integer1,integer2,sum;
	double average;
	cout << "Enter first integer:";
	cin >> integer1;
	cout << "Enter second integer:";
	cin >> integer2;
	sum = integer1 + integer2;
	average = sum / 3.0;
	cout << "The sum is " << sum << endl;
	cout << "The average is " << average << endl;
	return 0;
	// indicate that program ended successfully
}