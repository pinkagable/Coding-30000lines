#define _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>//要使用printf（）函数，要包含<stdio.h>头文件
int main()//返回整型，输入主函数
{
	printf("hello world");//printf()函数是库函数，作用是打印信息到屏幕上。
	return 0;//返回0
}
*/
//写一个代码求两个整数的和
/*#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	////////sum = a + b;
	////////	printf("sum=%d\n", sum);
		return 0;
}
*/
////int main()
//{
//	int coding = 0;
//	printf("???");
//		scanf("%d", &coding);
//		if (coding == 0)
//		{
//			printf("you can\n");
//		}
//		else
//		{
//			printf("go to maihongshu\n");
//		}
//		return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("good offer\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d %d", &num1,&num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", (int)sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9};
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}