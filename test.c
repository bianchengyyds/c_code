#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//34.对arr进行排序，排成升序，使用冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	//arr是数组，数组进行传参时传递过去的是数组首元素的地址：&arr[0]
//	
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; //假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) //每一趟冒泡排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz); //冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//33.循环，求第n个斐波那契数：
//int fib(int x)
//{
//	int a = 1;//a：c的左边的第二个数
//	int b = 1;//b：c的左边的第一个数
//	int c = 1;//c：新的结果
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fs = fib(n);
//	printf("fs = %d\n", fs);
//	return 0;
//}

//32.递归，求第n个斐波那契数（不实用）：
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else if (x > 2)
//		return fib(x - 1) + fib(x - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fs = fib(n);
//	printf("fs = %d\n", fs);
//	return 0;
//}

//31.递归，求n的阶乘：
//int factorial(int x) //1.x = 3
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * factorial(x - 1); //2.x = 2  3.x = 1
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//30.递归，求字符串的长度：
//int my_strlen(char* str) //1.str = bit\0
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //2.str = it\0  3.t\0  4.\0
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);  //1.2.3.4.3.2.1.
//	printf("len = %d\n", len);
//	return 0;
//}

//29.循环，求字符串的长度：
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址。
//	printf("len = %d\n", len);
//	return 0;
//}

//28.递归，输入123，打印1 2 3 。
//void print(int n)	//1. n = 123
//{
//	if (n > 9)
//	{
//		print(n / 10);	//2. n = 12    3. n = 1
//	}
//	printf("%d ,", n % 10);	//执行顺序：1.2.3.2.1.
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//27.链式访问1.：
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

//26.链式访问2.：
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//25.嵌套调用：
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//24.写一个函数，每调用一次这个函数，就会将num的值增加1：
//void Add(int* p)
//{
//	(*p)++; //   ++优先级高于*
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//23.写一个函数，实现一个整形有序数组的二分查找：
//int binary_search(int arr[], int k, int sz) //本质上arr是一个指针
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz); //传递的是数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	return 0;
//}

//22.写一个函数，判断1000到2000之间的闰年：
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1) //is_leap_year : 自定义函数，判断是否是闰年
//			printf("%d ", year);
//	}
//	return 0;
//}


//21.写一个函数，打印100到200之间的素数：
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1) //is_prime :自定义函数，判断是否是素数
//			printf("%d ", i);
//	}
//	return 0;
//}


//20.猜数字游戏：
//void menu()
//{
//	printf("**********************************\n");
//	printf("*****    1.paly    0.exit    *****\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//19.打印乘法口诀表：
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j); //%-2d:两位数左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//18.求十个数中的最大值：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//17.计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5... + 1 / 99 - 1 / 100的值：
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i; // 1/1-1/2+1/3-1/4+1/5...+1/99-1/100
//		flag = -flag;		//控制正负号
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//16.数一下1到100之间共出现多少个数字9：
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
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//15.打印100到200之间的素数：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2) //偶数一定不是素数
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) //sqrt是数学库函数：开平方
//		{								//试除法：产生2到i-1之间的数
//			if (i % j == 0)				//假如i=a*b,则a和b中至少有一个数<=sqrt(i)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}								//素数：只能被1和本身整除的整数
//	printf("\ncount = %d\n", count);
//	return 0;
//}




//14.打印1000到2000之间的闰年：
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}//闰年：1.能被4整除并且不能被100整除
//		//	     2.能被400整除
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//13.求两个数的最大公约数：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}//辗转相除法
//	printf("%d ", b);
//	return 0;
//}


//12.打印1到100之间的是3的倍数的整数：
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


//11.把三个整数从打到小排序：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//10.模拟用户登录场景（只能登录三次）:
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123") == 0)//#include <stdlib.h>
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

//9.在一个有序数组中查找具体的某个数字k：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}


//8.求1到10的阶乘相加：
//int main()
//{
//	int i = 1;
//	int n = 10;
//	int ret = 1;
//	int ret10 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		ret10 = ret10 + ret;
//	}
//	printf("ret10 = %d\n", ret10);
//	return 0;
//}

//7.for语句求n的阶乘：
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//6.while语句求n的阶乘：
//int main()
//{
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	while (i <= n)
//	{
//		ret = ret * i;
//		i++;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
// 
// 
//5.用do...while输出1到10之间的整数：
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
// 
//4.用for输出1到10之间的整数：
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}
//3.用while输出1到10之间的整数：
// 
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//2.输出1到100之间的奇数：
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
// 1.判断一个数是奇数还是偶数：
// 
//int main()
//{
//	int shu = 0;
//	scanf("%d\n", &shu);
//	if (shu % 2 != 0)
//	{
//		printf("这个数是奇数");
//	}
//	else
//		printf("这个数为偶数");
//	return 0;
//}
//	

//}