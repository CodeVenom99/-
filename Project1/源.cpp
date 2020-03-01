#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int Fibonacci(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 2;
	}
	else
		return func(num - 1) + func(num - 2);

}
void Hanoi(int num, char x, char y, char z)//将num从第哪个柱子（x）借助第哪个柱子（y）移到第哪个柱子（z）
{											
	if (num == 1)
	{
		printf("将%d从%c移到%c\r\n", num, x, z);//处理实参num=1时，x''=A，z''=c
	}
	else
	{
		Hanoi(num - 1, x, z, y);//将num-1从第一个柱子（A）借助第三个柱子（C）移到第二个柱子（B）
		printf("将%d从%c移到%c\r\n", num, x, z);//将num从第一个柱子（A）移到第三个柱子（C）
		Hanoi(num - 1, y, x, z);//将num-1从第二个柱子（B）借助第一个柱子（A）移到第三个柱子（C）
	}
}
int Factorial(int num)//阶乘
{
	if (num == 1)
	{	
		return num;
	}
	else
	{
		return num * Factorial(num - 1);
	}
	
}
int sum(int num)//1+2+3+4+..........
{
	if (num==1)
	{
		return num;
	}
	else
	{
		return num + sum(num - 1);
	}
}
void test01()
{
	int n = 5;
	//Hanoi(3, 'A', 'B', 'C');//A代表第一个柱子，B代表第二个柱子，C代表第三个柱子
	printf("斐波那契第三个数是：%d\r\n", Fibonacci(5));
	//printf("%d的阶乘为：%d\r\n", n,Factorial(n));
	//printf("1到%d的和为：%d\r\n", n,sum(n));
}
int main()
{
	test01();
	return 0;
}
