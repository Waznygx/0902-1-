#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////计算n的阶乘
////方法一
//int feidigui_chuancan_jc(int n)
//{
//	int jc = 1;
//	int num = n;
//	while (n >= 1)
//	{
//		jc = jc * n;
//		n--;
//	}
//	printf("%d!=%d", num, jc);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:");
//	scanf("%d", &n);
//	feidigui_chuancan_jc(n);
//	return 0;
//}
//////方法二
////int dihui_jc(int n)
////{	
////	if (n == 1)
////	{
////		return 1;
////	}
////	else
////	{
////		return n * dihui_jc(n - 1);
////	}
////}
////int main()
////{
////	int n = 0;
////	printf("请输入一个数:");
////	scanf("%d", &n);
////	printf("%d", dihui_jc(n));
////	return 0;
////}
//////方法三
//////int main()
//////{
//////	int n = 0;
//////	int jc = 1;
//////	printf("请输入一个数:");
//////	scanf("%d", &n);
//////	if (n < 1)
//////	{
//////		printf("error!\n");
//////	}
//////	else
//////	{
//////		for (int i = 1; i <= n; i++)
//////		{
//////			jc = jc * i;
//////		}
//////		printf("%d阶乘为%d\n", n, jc);
//////	}
//////	return 0;
//////}

////计算1!+2!+3!+.....+10!
//// 方法一
//int digui(int n)
//{
//	if (n==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * digui(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for ( n = 1; n <= 10; n++)
//	{
//		sum += digui(n);
//	}
//	printf("%d", sum);
//	return 0;
//}
//////方法二
////int main()
////{
////	int i = 0;
////	int n = 0;
////	//输出为负数，这是因为在C语言中，int类型的范围是-2147483648到2147483647，而100!的值已经超出了这个范围。
////	//因此，当计算到100!时，会发生溢出，导致输出结果为负数。
////	long long jc = 1;
////	long long sum = 0;
////	for ( n = 1; n <= 100; n++)
////	{
////		jc = 1;
////		for ( i = 1; i <= n; i++)
////		{
////			jc = jc * i;
////		}
////		sum += jc;
////	}
////	printf("%lld\n", sum);//LLD,不是十一D
////	return 0;
////}

////三次机会输入密码
//#include<string.h>
//int main()
//{
//	char p[50] = "0";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", p); // 删除 & 运算符
//		if (strcmp("wl08", p) == 0)
//		{
//			printf("correct!\n");
//			break;
//		}
//		else
//		{
//			printf("error!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit!\n");
//	}
//	return 0;
//}

////输入三个数，从小到大输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d<%d<%d", a, b, c);
//	return 0;
//}

////打印1-100以内3的倍数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for ( n = 1; n <= 100; n++)
//	{
//			if (n%3==0)
//			{
//				printf("%d ", n);
//				count++;
//			}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
//#include<assert.h>
//int panduan(int a, int b)
//{
//	assert(a && b != 0);
//	int m = a % b;
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("input:");
//	scanf("%d%d", &a, &b);
//	printf("%d",panduan(a, b));
//	return 0;
//}

////打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

////打印100-200的素数
//#include<math.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	for ( num = 100; num < 201; num++)
//	{
//		for (i = 2; i <= sqrt(num); i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(num))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

////1-100出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i < 101; i++)
//	{
//			if (i % 10 == 9 || i / 10 == 9)
//			{
//				printf("%d ", i);
//				count++;
//			}
//	}
//	printf("\n%d", count);
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int n = 0;
//	int d = 1;
//	float sum = 0;
//	for ( n = 1; n <= 100; n++)
//	{
//		sum += 1.0 / n;
//		sum *= d;
//	}
//	printf("%f ", sum);
//	return 0;
//}

////求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 4,3,10,2,7,6,8,5,9,1 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];
//	for ( i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}

////打印9*9乘法表
//int main()
//{
//	int h = 0;
//	int l = 0;
//	for ( h = 1; h <= 9; h++)
//	{
//		for (l = 1; l <= h; l++)
//		{
//			printf("%d*%d=%-2d ", h, l, h * l);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////无序整型数组查找数字
//void search(int arr[], int length, int num)
//{
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		if (num == arr[i])
//		{
//			printf("found!%d", arr[i]);
//			break;
//		}
//	}
//	if (i == length)
//	{
//		printf("not found");
//	}
//}
//int main()
//{
//	int arr[20] = { 1,5,4,6,34,66,2,7,8,66,8,45,58,23,95,24,52,65,11,34 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	scanf("%d", &num);
//	search(arr, length, num);
//	return 0;
//}

////写一个函数判断是否为素数
//#include<math.h>
//void prime(int n)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d is not a prime\n", n);
//			break;
//		}
//	}
//	if (i > sqrt(n))
//	{
//		printf("%d is a prime\n", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	prime(n);
//	return 0;
//}

////用函数进行二分查找
//void erfen(int arr[], int length,int num)
//{
//	int left = 0;
//	int right = length - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (num > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (num < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("found!%d=arr[%d]", arr[mid],mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("not found!\n");
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	scanf("%d", &num);
//	erfen(arr, length,num);
//	return 0;
//}

////输入1234，输出1 2 3 4
//int digui(int num)
//{
//	if (num > 9)
//	{
//		digui(num/10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 1234;
//	digui(num);
//	return 0;
//}

////求字符串长度（非递归）
//#include<string.h>
//#include<assert.h>
////方法二
//int my_strlen(char* str)
//{
//	assert(*str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d\n", my_strlen(arr));
//	////方法一
//	//printf("%d", strlen(arr));
//	return 0;
//}

////求字符串长度（递归）
//int digui(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+digui(str+1);
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d\n", digui(arr));
//	return 0;
//}

////猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	int rand_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入你猜测的数字：");
//		scanf("%d", &input);
//		if (input > rand_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < rand_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("\n  ******************************************\n");
//	printf("  ******************************************\n");
//	printf("  ****************   0.exit  ***************\n");
//	printf("  ****************   1.play  ***************\n");
//	printf("  ******************************************\n");
//	printf("  ******************************************\n");
//}
//int main()
//{
//	int num = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("\n请选择你的操作：");
//		scanf("%d", &num);
//		switch (num)
//		{
//		case 0:
//			printf("退出系统！\n");
//			break;
//		case 1:
//			printf("开始游戏！\n");
//			game();
//			break;
//		default:
//			printf("选择错误！请重新选择！\n");
//			break;
//		}
//	} while (num);
//	return 0;
//}

//冒泡排序(倒序)
void maopao(int arr[], int length)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < length - 1; i++)
	{
		for ( j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}

}
int main()
{
	int arr[] = { 4,24,13,42,53,46,55,57,73,95,88,29,19 };
	int length = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, length);
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}