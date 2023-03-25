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
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", (int)sum);
//	return 0;
//}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#define ADD(X,Y) ((X)+(Y))
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int*pa = &a;//pa是用来存放地址的，在c语言中pa叫做指针变量，//*说明pa是指针变量 int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}
//#include <stdio.h>
////指针变量的大小取决于地址的大小
////32位平台下地址是32个bit位（即4个字节）
////64位平台下地址是64个bit位（即8个字节）
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,100.0};
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", ps->name, ps->age, ps->score);
//	printf("3:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	printf("%d", a > b ? a: b);
//	return 0;
//}

//判断一个数是否能被五整除
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("chengnian\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 28;
//	if (age <= 18)
//		printf("未成年\n");
//	else if (age <= 26)
//		printf("青年\n");
//	else  (age <= 40)
//		printf("壮年\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 3;
//	if (num = 5)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0==num % 2)
//		printf("%d为偶数\n",num);
//	else
//		printf("%d为奇数\n",num);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//}
//简单方法
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break; 
//	case 4:
//		printf("星期四\n");
//			break; 
//	case 5:
//		printf("星期五\n");
//				break; 
//	case 6:
//		printf("星期六\n");
//					break;
//	case 7:
//		printf("星期日\n");
//						break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	int temp = 0;
//	while ((temp=getchar() )!= '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认失败！\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//		for (; j < 3; j++)
//			printf("hello world\n");
//	//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("hello world\n");
//		i++;
//	} while (i < 10);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int num = 1;
//	scanf("%d",&n);
//	num = n;
//	do
//	{
//		n--;
//		num *= n;
//	}while(n>1);
//	printf("%d ", num);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &i);
//	for (i; i > 0; i--)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//}
//#include<stdio.h>
//int main() 
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	printf("请输入要计算前一至几的阶乘和\n");
//	scanf("%d", &m);
//	for (n = 1; n <= m; n++)
//	{
//		num = 1;//计算n的阶乘之前，把num处理为1
//		for (i = 1; i <= n; i++)
//		{
//			num *= i;
//		}
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	printf("请输入要计算一至几的阶乘和");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		num *= i;
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//要查找的数字
//    //在arr这个有序的数组中查找k（7）的值
//    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了：下标是%d", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到了\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to c world!!!!!!!!";
//	char arr2[] = "##########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	left++;
//	right--;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>//调用windows.h中的sleep函数
//#include<string.h>//调用strlen()函数
//int main()
//{
//	char arr1[] = "welcome to c world!!!!!!!!";
//	char arr2[] = "##########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串“123456”
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码;>");
//		scanf("%s", password);
//		//if (password == "123456")//err，两个字符串比较，不能用==，应该使用strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{;
//			printf("密码错误,你还有%d次机会\n",2-i);
//		}
//	}
//	if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//	
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()//打印菜单
//{
//	printf("********************************\n");
//	printf("**********    1.play    ********\n");
//	printf("**********    0.exit    ********\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//猜数字的实现
//	//1、生成随机数
//	//rand()返回了一个0~32767的数字
//	//时间戳
//	int ret = rand()%100+1;
//	//2、猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret) 
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了！！\n");
//			break;
//		}
//	}
//}
////3:40起床
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错了,重新选择\n");
//				break;
//			}
//
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	//输入
//	scanf("%d%d%d" ,&a, &b,&c);
//	//调整顺序
//	if (a < b)
//	{
//		int temp=a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m% max == 0 && n % max == 0)
//		{
//			printf("最大公约数是%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	while (t=m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数%d\n", n);
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i = i + 4)
//	{
//		while (i % 100 != 0||i%400==0)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		//判断i是否为素数
//		for (a = 2; a < i; a++)
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (i == a)
//			{
//				printf("%d ", i);
//			}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//循环内用到的数要在循环内赋初值
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
// 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//flag:
//	printf("hello world\n");
//	printf("hello world\n");
//
//	goto flag;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 300");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，输入：我是猪，取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较不能用等号
//	{
//		printf("不关机了\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//#include<stdio.h>
//get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//		return 0;
//}
//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int t=0;
//	t = x;
//	x = y;
//	y = t;
//}
//Swap被调用的时候，实参传递给形参，其实形参是实参的一份临时拷贝。改变形参不能改变实参
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n",a,b);
//	Swap(a,b);
//	printf("交换后:a=%d,b=%d", a, b);
//	return 0;
//}//无法交换x，y，只是交换了函数里的新的xy
//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;//pa就是一个指针变量
//	printf("交换前:a = % d, b = % d\n", a, b);
//	swap(&a, &b);
//	printf("交换后:a = % d, b = % d \n", a, b);
//}
//写一个函数判断一个数是不是素数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	int j = 0;
//	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//
//	}
//	printf("%d\n", count);
//		return 0;
//}
//写一个函数，实现一个整型有序数组的二分查找
//#include<stdio.h>
//#include<string.h>
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k )
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到的位置的下表，找不到返回一个-1
//	int ret=binary_search(arr,key,sz);
//	if (-1==ret)
//	{
//		printf("找不到\n");
//	}
//	else 
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
#include<stdio.h>
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}


















