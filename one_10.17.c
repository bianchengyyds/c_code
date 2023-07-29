#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("a比b大\n");
//	}
//	else if (a < b)
//	{
//		printf("b比a大\n");
//	}
//	else if (a == b)
//	{
//		printf("a等于b\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("是偶数\n");
//	}
//	else if (a % 2 == 1)
//	{
//		printf("是奇数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
// printf("请输入一个年份数：");
//	scanf("%d", &year);//闰年：是四的倍数且不是一百的倍数,或四百的倍数
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//int main()
//{
//    int day = 0;
//    printf("请输入星期几：");
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:printf("星期一\n");
//        break;
//    case 2:printf("星期二\n");
//        break;
//    case 3:printf("星期三\n");
//        break;
//    case 4:printf("Thursday\n");
//        break;
//    case 5:printf("Friday\n");
//        break;
//    case 6:printf("Saturday\n");
//        break;
//    case 7:printf("Sunday\n");
//        break;
//    default:printf("错误\n");
//    }
//    return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	switch (a)
//	{
//	case 1:
//		a++;
//		b++;
//	case 2:
//		switch (a)
//		{
//		case 1:
//			b++;
//		case 2:
//			a++;
//			break;
//		}
//	case 3:
//		b++;
//	case 4:
//		a++;
//		break;
//	default:
//		a++;
//		break;
//	}
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("请输入一个整数：");
//	scanf("%d", &b);
//	int c = a + b;
//	printf("c = %d", c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("是偶数");
//	}
//	else if (num % 2 != 0)
//	{
//		printf("是奇数");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("请输入星期几：");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesady");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default:
//		printf("错误");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("请输入星期几：");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("错误");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	switch (a)
//	{
//	case 1:
//		a++;
//		b++;
//	case 2:
//		b++;
//	case 3:
//		switch (b)
//		{
//		case 1:
//			a++;
//		case 2:
//			a++;
//		case 3:
//			b++;
//			break;
//		}
//	case 4:
//		a++;
//	case 5:
//		b--;
//		break;
//	default:
//		a++;
//		break;
//	}
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int u = 0;
//	int sum2 = 0;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//		{
//			sum = sum + i;
//			i+=2;
//		}
//	}
//	while (u <= 100)
//	{
//		if (u % 2 == 0)
//		{
//			sum2 = sum2 + u;
//			u += 2;
//		}
//	}
//	printf("奇数和：%d，偶数和：%d", sum,sum2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	int num2 = 0;
//	int sum2 = 0;
//	for (num = 1; num <= 100; num += 2)
//	{
//		if (num % 2 != 0)
//		{
//			sum += num;
//		}
//	}
//	for (num2 = 2; num2 <= 100; num2 += 2)
//	{
//		if (num2 % 2 == 0)
//		{
//			sum2 += num2;
//		}
//	}
//	printf("奇数和：%d,偶数和：%d\n", sum, sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (num1 = 1; num1 <= 100; num1 += 2)
//	{
//		if (num1 % 2 != 0)
//		{
//			sum1 += num1;
//		}
//	}
//	for (num2 = 0; num2 <= 100; num2 += 2)
//	{
//		if (num2 % 2 == 0)
//		{
//			sum2 += num2;
//		}
//	}
//	printf("奇数和：%d,偶数和：%d\n", sum1, sum2);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
	//int num1 = 1;
	//int num2 = 0;
	//int sum1 = 0;
	//int sum2 = 0;
//	while (num1 <= 100)
//	{
//		if (num1 % 2 != 0)
//		{
//			sum1 += num1;
//			num1+=2;
//		}
//	}
//	while (num2 <= 100)
//	{
//		if (num2 % 2 == 0)
//		{
//			sum2 += num2;
//			num2+=2;
//		}
//	}
//	printf("奇数：%d,偶数：%d\n", sum1, sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (num1 = 1; num1 <= 100; num1 += 2)
//	{
//		if (num1 % 2 != 0)
//		{
//			sum1 += num1;
//		}
//	}
//	for (num2 = 0; num2 <= 100; num2 += 2)
//	{
//		if (num2 % 2 == 0)
//		{
//			sum2 += num2;
//		}
//	}
//	printf("%d %d\n", sum1, sum2);
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	while (num <= 100)
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//		}
//		else if (num % 2 == 0)
//		{
//			sum2 += num;
//		}
//		num++;
//	}
//	printf("%d %d\n", sum1, sum2);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (num = 0; num <= 100; num++)
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//		}
//		else if (num % 2 == 0)
//		{
//			sum2 += num;
//		}
//	}
//	printf("%d %d\n", sum1, sum2);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	do
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//		}
//		else if (num % 2 == 0)
//		{
//			sum2 += num;
//		}
//		num++;
//	} while (num <= 100);
//	printf("%d %d\n", sum1, sum2);
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

//# include <stdio.h>
////6.while语句求n的阶乘：
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

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	if (num % 2 != 0)
//	{
//		printf("奇数");
//	}
//	else if (num % 2 == 0)
//	{
//		printf("偶数");
//	}
//	return 0;
//}

//# include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	while (num <= 100)
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//			num++;
//		}
//		else if (num % 2 == 0)
//		{
//			sum2 += num;
//			num++;
//		}
//	}
//	printf("%d %d\n", sum1, sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (num = 0; num <= 100; num++)
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//		}
//		else if (num % 2 == 0)
//		{
//			sum2 += num;
//		}
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	do
//	{
//		if (num % 2 != 0)
//		{
//			sum1 += num;
//			num++;
//		}
//		else if (num %2 == 0)
//		{
//			sum2 += num;
//			num++;
//		}
//	}while (num <= 100);
//	printf("sum1 = %d,sum2 = %d\n", sum1, sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("请输入星期几:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf("%s", "   ");
//		}
//		printf("%s\n", "*****");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int max(int num1, int num2)
//{
//	int result = 0;
//	if (num1 < num2)
//	{
//		result = num2;
//	}
//	else if (num1 > num2)
//	{
//		result = num1;
//	}
//	else
//	{
//		result = num1 == num2;
//	}
//	return result;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", max(a,b));
//	return 0;
//}

//将三个数从大到小输出：
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b < c)
//			{
//				tmp = b;
//				b = c;
//				c = tmp;
//			}
//		}
//		else if (a < c)
//		{
//			tmp = a;
//			a = c;
//			c = b;
//			b = tmp;
//		}
//	}
//	else if (a < b)
//	{
//		if (a > c)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		else if (a < c)
//		{
//			if (b < c)
//			{
//				tmp = a;
//				a = c;
//				c = tmp;
//			}
//			else if (b > c)
//			{
//				tmp = a;
//				a = b;
//				b = c;
//				c = tmp;
//			}
//		}
//	}
//	printf("max=%d sec=%d min=%d", a, b, c);
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年", year);
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("请输入星期几:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 2000;
//	while (year >= 2000 && year <= 3000)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ",year);
//		}
//		year++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 2000; year >= 2000 && year <= 3000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
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
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//
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
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印1到100之间的所有3的倍数的数
//

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

//给两个数，求这两个数的最大公约数(辗转相除法)

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d", &num1, &num2);
//	while (num1 % num2)
//	{
//		num3 = num1 % num2;
//		num1 = num2;
//		num2 = num3;
//	}
//	printf("%d\n", num2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
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

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//打印100到200之间的素数(试除法)
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
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
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d ", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) //i=a*b,则a或b中至少有一个数<=(开平方i)
//		{						//sqrt():数学库函数，开平方
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
//
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
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
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
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
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
//	float i = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 -= 1 / i;
//	}
//	printf("sum1=%f\n", sum1);
//	printf("sum2=%f\n", sum2);
//	printf("sum=%f\n", sum = sum1 + sum2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float i = 0;
//	float sum = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 -= 1 / i;
//	}
//	printf("sum1=%f\n", sum1);
//	printf("sum2=%f\n", sum2);
//	printf("sum=%f\n", sum = sum1 + sum2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}



//求十个整数中的最大值
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (j = 1; j <= sz; j++)
//	{
//		if (max < arr[j])
//		{
//			max = arr[j];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;//i:行
//	int j = 0;//j:列
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", j, i, j * i);//%2d:两位右对齐(左边不够补空格)
//		}											//%-2d:两位左对齐(右边不够补空格)
//		printf("\n");
//	}
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
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 1; i <= sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
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
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j==0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
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
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 -= 1.0 / i;
//	}
//	printf("%lf ", sum = sum1 + sum2);
//	printf("%lf ", sum1);
//	printf("%lf ", sum2);
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
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
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
//	int num = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入一个想要查找的数：");
//	scanf("%d", &num);
//	int i = 0;
//	while (i <= sz)
//	{
//		if (num != arr[i])
//		{
//			i++;
//		}
//		else if (num == arr[i])
//		{
//			printf("下标:%d,值:%d\n", i, arr[i]);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	printf("请输入一个想要查找的数：");
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] == num)
//		{
//			printf("下标:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("下标:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int ret_sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		ret_sum += ret;
//	}
//	
//	printf("%d\n", ret);
//	printf("%d\n", ret_sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "stephen curry!!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "tian zhenyong!!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 3)
//	{
//		printf("####请输入密码：#####\n");
//		int passwd = 0;
//		scanf("%d", &passwd);
//		if (passwd == 123)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		
//		else
//		{
//			printf("密码错误,请重新输入\n");
//		}
//		i++;
//		
//	}
//	if (i == 3)
//	{
//		printf("密码错误三次，退出程序");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
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
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	scanf("%d", &num);
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("下标:%d ", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
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
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int retsum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		retsum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", retsum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	int s = 1;
//	for (j = 1; j <= n; j++)
//	{
//		s *= i;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int base, exponent;
//
//    long long result = 1;
//
//    printf("基数: ");
//    scanf("%d", &base);
//
//    printf("指数: ");
//    scanf("%d", &exponent);
//
//    while (exponent != 0)
//    {
//        result *= base;
//        --exponent;
//    }
//    printf("结果：%lld", result);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i <= len; i++)
//	{
//		char a = arr[i];
//		printf("%c ", a);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char c;
//
//    for (c = 'A'; c <= 'Z'; ++c)
//        printf("%c ", c);
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	/*char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	int len = strlen(arr);*/
//	char i;
//	for (i = "A"; i <= "Z"; ++i)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	int sum = 1;
//	for (j = 1; j <= n; j++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char c;
//	for (c = 'a'; c <= 'z'; c++)
//	{
//		printf("%c ", c);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char c;
//
//    for (c = 'A'; c <= 'Z'; ++c)
//        printf("%c ", c);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d ", sizeof(int));4(字节)
//	printf("%d ", sizeof(float));4
//	printf("%d ", sizeof(double));8
//	printf("%d ", sizeof(char));1
//	printf("%d ", sizeof(long));4
//	printf("%d ", sizeof(short));2
//	printf("%d ", sizeof(long long));8
//	return 0;
//}
//
//#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	/*int sum = 0;*/
//	/*for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}*/
//	int sum = n * i + n * (n - 1) * (n-(n-1)) / 2;
//	printf("%d", sum);
//	return 0;
//}
//
//判断
//if
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年");
//	}
//	else
//		printf("不是闰年");
//	return 0;
//}

//switch

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("error");
//	}
//	return 0;
//}


//循环
//while

//#include <stdio.h>
//
//int main()
//{
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//		year++;
//	}
//	return 0;
//}



//for

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (num = 0; num <= 100; num++)
//	{
//		if (num % 2 == 0)
//		{
//			sum1 += num;
//		}
//		else if (num % 2 != 0)
//		{
//			sum2 += num;
//		}
//	}
//	printf("%d %d ", sum1, sum2);
//	return 0;
//}

//do while

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
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
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d ",a,b,c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("%d ",b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d ", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
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
//	printf("\n%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
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
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int sz = (left + right);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
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
//			printf("%d * %d = %-2d  ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d ", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int retsum = 0;
//	int ret = 1;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		retsum += ret;
//	}
//	printf("%d ", retsum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	scanf("%d", &num);
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == num)
//		{
//			printf("找到了,下标是:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -10,-9,-8,-7,-6,-5,-4,-3,-2,-1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == num)
//		{
//			printf("找到了，下标为:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	int result = 1;
//	scanf("%d %d", &i, &n);
//	while (j <= n)
//	{
//		result *= i;
//		j++;
//	}
//	printf("%d ", result);
//	return 0;
//}



//打印1000到2000之间的闰年√
// 打印1到100之间的所有3的倍数的数√
// //求一个整数的n次方√
//循环输出26个字母√
// // //求n的阶乘√
//计算1!+2!+3!+......+10!√
// //求1到100之间的整数里9的个数√
// //将三个数从大到小输出√
//给两个数，求这两个数的最大公约数(辗转相除法)√
//打印100到200之间的素数(试除法)√
//分数求和：1/1 - 1/2 + 1/3 - 1/4 + 1/5 ... + 1/99 - 1/100 == ? √
//求十个整数中的最大值√
//输出9*9乘法口诀表√
//在一个整形有序数组中查找某个具体的数，打印它的下标，找不到则返回找不到(二分法)√
//					笨方法：查找n次，二分法：最多查找log以二为底，n为真数，的次数
//演示多个字符从两端移动，向中间汇聚√
//模拟用户登录场景，并且只能登录三次(密码正确则输出登录成功，否则退出程序)√


