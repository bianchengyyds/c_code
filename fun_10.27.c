#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}



//#include <stdio.h>
//
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "tian";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "tzy";
//	char arr2[] = "######";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "tianzhenyong";
//	memset(arr, '*', 4);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数可以找出两个整数中的最大值
//#include <stdio.h>
//
//int max(int x, int y)
//{
//	if (x < y)
//	{
//		return y;
//	}
//	else
//	{
//		return x;
//	}
//}
//
//int main()
//{
//	int i = 9;
//	int j = 9;
//	int m = max(i, j);
//	printf("%d\n", m);
//	return 0;
//}

//写一个函数交换两个整形变量的内容

//#include <stdio.h>
//
//void huan(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 1;
//	//int* pa = &i;//指针变量
//	// *pa = 10;			//解引用，现在i=10
//	//int* pv = &j;
//	huan(&i, &j);
//	printf("%d %d",i,j);
//	return 0;
//}

//
//#include <stdio.h>
//
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int i = 1;
//	int j = 0;
//	swap(&i, &j);
//	printf("%d,%d", i,j);
//	return 0;
//}

////在一个字符串中找出某个字符出现的次数
//#include <stdio.h>
//
//int main()
//{
//	char arr[10] = "aaa";
//	scanf("%s", &arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if ('a' == arr[i])
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "tian";
//	char arr2[] = "########";
//	strcpy(arr2, arr);
//	printf("%s",arr2);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "tianzy";
//	memset(arr, '*', 4);
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 3;
//	int j = 2;
//	int a = add(i, j);
//	printf("%d\n", a);
//	return 0;
//}

////写一个函数交换两个整形变量的内容
//#include <stdio.h>
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 2;
//	swap(&i, &j);
//	printf("%d,%d", i, j);
//	return 0;
//}

//#include <stdio.h>
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int i = 1;
//	int j = 0;
//	swap(&i, &j);
//	printf("%d,%d", i, j);
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int max = 0;
//	if (i < j)
//	{
//		max = j;
//	}
//	else
//	{
//		max = i;
//	}
//	printf("%d ", max);
//	return 0;
//}
//
//         * *
//         * *
//**********************
//**********************
//        *   *
//        *   *

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	scanf("%d%d", &i, &j);
//	while(i%j)
//	{
//		int tmp = i % j;
//		i = j;
//		j = tmp;
//	}
//	if (i % j == 0)
//	{
//		printf("%d\n", j);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
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
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}




//#include <stdio.h>
//
//void swap(int* pa, int* pb)//pa和pb是形式参数	
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int i = 1;
//	int j = 0;
//	swap(&i, &j);//&i和&j是实际参数
//	printf("%d,%d", i,j);
//	return 0;
//}

//写一个函数判断一个数是不是素数
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	if (y > sqrt(x))
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int is_runyear(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_runyear(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int is_nin(int x)
//{
//	if (x % 10 == 9 || x / 10 == 9)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (is_nin(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
////#include "Swap.h"
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int i = 0;
//	int j = 2;
//	Swap(&i, &j);
//	printf("i=%d,j=%d\n", i, j);
//	return 0;
//}


//#include <stdio.h>
//
//void cheng(int n)
//{
//	int x = 0;
//	int y = 0;
//	for (x=1;x <= n; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d * %d = %-2d ", y, x, y * x);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 9;
//	cheng(i);
//	return 0;
//}



//#include <stdio.h>
//void print(int n)
//
//{
//
//	int i = 0;
//
//	int j = 0;
//
//	for (i = 1; i <= n; i++)
//
//	{
//
//		for (j = 1; j <= i; j++)
//
//		{
//
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	print(n);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int is_su(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	if (j > sqrt(x))
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_su(i) == 1)
//	{
//		printf("是素数,%d ", i);
//	}
//	else if (is_su(i) == 0)
//	{
//		printf("不是素数");
//	}
//	return 0;
//}