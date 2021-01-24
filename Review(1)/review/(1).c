#include <stdio.h>
int main()
{
	printf("Hello world\n");
	
	/*	data type
		char        //字符数据类型
		short       //短整型
		int         //整形
		long        //长整型
		long long   //更长的整形
		float       //单精度浮点数
		double      //双精度浮点数*/
	
	// To verify how long each type is
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	/* 在C++中并未规定int long，long long的具体字节数
	* 但可以确定的是 int<=long<=long long
	*/
	
	// 定义变量的方法(当局部变量has the same name as全局变量
	// local variabel takes precedence
	int age;//› Declare variables with name and data type before use 
	float weight = 45.5F;
	printf("weight is %f", weight);
	/* 
	数字后加符号
	U由无符号整形储存
	L由长整型储存（先区别数字，再分为长整形和logn double）
	F代表由浮点方式储存
	默认十进制
	H 该数字由十六进制储存
	B 八进制
	前加0 八进制 Octonary
	前加0x 十六进制 Hexadecimal
	*/
	return 0;
}