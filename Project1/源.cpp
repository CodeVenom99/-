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
void Hanoi(int num, char x, char y, char z)//��num�ӵ��ĸ����ӣ�x���������ĸ����ӣ�y���Ƶ����ĸ����ӣ�z��
{											
	if (num == 1)
	{
		printf("��%d��%c�Ƶ�%c\r\n", num, x, z);//����ʵ��num=1ʱ��x''=A��z''=c
	}
	else
	{
		Hanoi(num - 1, x, z, y);//��num-1�ӵ�һ�����ӣ�A���������������ӣ�C���Ƶ��ڶ������ӣ�B��
		printf("��%d��%c�Ƶ�%c\r\n", num, x, z);//��num�ӵ�һ�����ӣ�A���Ƶ����������ӣ�C��
		Hanoi(num - 1, y, x, z);//��num-1�ӵڶ������ӣ�B��������һ�����ӣ�A���Ƶ����������ӣ�C��
	}
}
int Factorial(int num)//�׳�
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
	//Hanoi(3, 'A', 'B', 'C');//A�����һ�����ӣ�B����ڶ������ӣ�C�������������
	printf("쳲��������������ǣ�%d\r\n", Fibonacci(5));
	//printf("%d�Ľ׳�Ϊ��%d\r\n", n,Factorial(n));
	//printf("1��%d�ĺ�Ϊ��%d\r\n", n,sum(n));
}
int main()
{
	test01();
	return 0;
}
