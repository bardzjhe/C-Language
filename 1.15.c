#include <stdio.h> //引用头文件
#include <limits.h>
#include <stdlib.h>// system
int main()
{// 1.15.2021 Che-tsun Republic 
	printf("Hello world\n");
	// Q1
	//交换两个整数而不用第三个参数
	//会有overflow溢出的疑虑,ifab大于最大整形
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	//异或 xor 满足交换律
	//3^5^3=5
	// 不会overflow ^ 按（二进制）位 异或,相同为0，相异为1
	int c = 3;//011
	int d = 5;//101
	c = c ^ d;//c=110 the difference 
	d = c ^ d;//d=011 the difference of the difference and d
	c = c ^ d;//c=101 the difference of the difference and adjusted d
	//  
	printf("c=%d d=%d\n", c, d);
	// Q2 Find out the only element that occurs only once
	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		// 统计arr[]
		int j = 0;
		int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}

		}
		if (count==1) // verify the specific element 
		{
			printf("单身狗：%d\n", arr[i]);
			break;
		}
	
	}
	//Q3 写一个关机shutdown程序，如果run the program,会在一分钟内关机
	// 但input一个value，停止关机
	char input[20] = { 0 };
	system("shutdown -s -t 600");
again:
	printf("Please input not to stop shutdown\n");
	scanf("%s", input);
	if (strcmp(input, "not") == 0)// 判断input
		
	{
		system("shutdown -a");
	}
	else
	{
		goto again; // 类似break
	}
	return 0;//代表program正常退出
}
