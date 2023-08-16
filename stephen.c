#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	char ch = 'A';
//	float num = 1.5;
//	printf("%d\n", age);
//	printf("%c\n", ch);
//	printf("%f\n", num);
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	char ch = 'A';
//	float Keven = 1.5;
//	printf("%d\n", age);
//	printf("%c\n", ch);
//	printf("%f\n", Keven);
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	return 0;
//}

//int age = 10;
//int main()
//{
//	int age = 20;
//	printf("%d\n", age);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//*1.写一个加法求和程序, 让两个整数进行相加.
//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
////举例
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
////括号中的MALE,FEMALE,SECRET是枚举常量
//int main()
//{
//	//字面常量演示
//	3.14;//字面常量
//	1000;//字面常量
//
//	//const 修饰的常变量
//	const float pai = 3.14f;   //这里的pai是const修饰的常变量
//	pai = 5.14;//是不能直接修改的！
//
//	//#define的标识符常量 演示
//#define MAX 100
//	printf("max = %d\n", MAX);
//
//	//枚举常量演示
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	3;
//	3.14//字面常量 : 就是一个值
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	const int num = 3;	//const - 常属性
//						//num - const修饰的常变量
//	printf("num = %d\n", num);
//	num = 6;
//	printf("num = %d\n", num);
//	return 0;
//}
 
//#include <stdio.h>
//
//#define MAX 10	//定义值为10的MAX常量
//
//int main()
//{
//	int arr[MAX] = {0};	//arr[]数组中,[]内要使用常量表达式
//	printf("MAX = %d\n", MAX);
//	return 0;
//}

//#include <stdio.h>
//
//enum Color	//enum - 枚举关键字
//			//Color - 枚举类型
//{
//	RED,
//	YELLOW,
//	BLUE	//这三个是枚举常量
//};
//
//int main()
//{
//	enum Color a = RED;	//0
//	enum Color b = YELLOW;	//1
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", BLUE);	//2
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "man";
//	char arr2[] = { 'm', 'a','n' };
//	char arr3[] = { 'm','a','n','\0' };
//	printf("%d\n", strlen(arr1));	//strlen() - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", sizeof(arr1));	//sizeof() - 计算字节个数
//	return 0;
//}


//*2.在屏幕上打印 c:\code\test.c

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "c:\\code\\test.c";
//	printf("%s\n", arr);
//	return 0;
//}

////*3.在屏幕上打印一个单引号, 一个双引号
//
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//*4.下面代码输入的结果是什么

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%s\n", "c:\code\101\test.c");
//	printf("lenth = %d\n", strlen("c:\code\101\test.c"));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int choice = 0;
//	printf("请你选择1(努力)或0(放弃):\n");
//	scanf("%d", &choice);
//	if (choice == 1)
//	{
//		printf("继续加油哦!\n");
//	}
//	else
//	{
//		printf("种一棵树最好的时间是十年前, 其次就是现在.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int codeline = 1;
//	int linenum = 1;
//	while (codeline <= 20000)
//	{
//		printf("%d : 敲一行代码\n", linenum);
//		codeline++;
//		linenum++;
//	}
//	if (codeline > 20000)
//	{
//		printf("可以去找工作了\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)	//int				Add		(int x, int y)
//						//为z的返回类型		函数名		函数参数
//{
//	int z = x + y;
//	return z;		//返回给变量sum的值
//}					//{}内的为函数体
//
//int main()
//{
//	int num1 = 200;
//	int num2 = 100;
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(num1, num2);	//函数Add()
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

////*5.打印一个整型数组中的全部元素
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	/*int i = 5 % 2;
//	printf("%d\n", i);*/
//	//int i = 128;
//	//int j = i << 2;
//	int i = 6;
//	int j = 3;
//	int k = i ^ j;
//	int a = 0;
//	a = a + 2;
//	a += 2;
//	a += 1;
//	a++;
//	printf("%d\n", k);
//	//printf("%d\n", j);
//	return 0;
//}

//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n", !a);	// ! - 逻辑非, 将变量的值由真变假, 由假变真

//*6.计算十个整型数组元素的大小

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//*7.计算数组的元素个数
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//*8.给你一个整数 n,请你帮忙计算并返回该整数[各位数字之积]与[各位数字之和]的差.
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int cheng = 1;
//    int plus = 0;
//    printf("请输入一个整数:\n");
//    scanf("%d", &n);
//    while (n)
//    {
//        int yu = n % 10;
//        cheng = cheng * yu;
//        plus = plus + yu;
//        n = n / 10;
//    }
//    int result = cheng - plus;
//    printf("%d\n", result);
//    return 0;
//}

////*9.比较两个整数的较大值.(使用关系操作符或条件操作符完成)
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%d\n", a || b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &a, &b);
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;//申请4个byte的空间
//	int* p = &a;//有一种变量是用来存放地址的 - 指针变量 , p现在是指针变量, 它的类型是int*
//	printf("%d\n", *p);// * - 解引用操作符
//					   //p中存放的是a的地址, 而对p解引用后, p中存放的就是a地址对应的值
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch = 't';
//	char* p = &ch;
//	int a = 0;
//	int* q = &a;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(q));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	char b = 'w';
//	char* q = &b;
//	printf("请输入一个整数, 一个字符数:\n");
//	scanf("%d %c", &a, &b);
//	printf("%d\n");
//	printf("%c\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 't','z','y' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//*10. 写一个函数, 求两个数的较大值

//方法一:
//#include <stdio.h>
//
//int Max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//方法二:
//#include <stdio.h>
//
//int Max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
////创建一个结构体类型(Book)
//struct Book		//struct - 结构体关键字 //Book	-	类型名称
//{
//	char name[20];
//	short price;
//};				//{}内描述Book的相关属性, ; - 类型定义的结束标志, 不能少
//int main()
//{
//	//利用结构体类型 - 创建一个该类型的结构体变量(b1)
//	struct Book b1 = { "C语言程序设计", 55 };
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);	//. - 结构体变量成员操作符, name和price是b1下的两个成员
//	return 0;
//}

//#include <stdio.h>
//
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* p = &b1;		//结构体类型的指针变量
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).price);	//这种有点啰嗦
//	printf("%s\n", p->name);
//	printf("%d\n", p->price);	//-> - 结构体指针成员操作符, 表示p指向的对象b1的name成员
//	return 0;
//}

//#include <stdio.h>
//
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄:\n");
//	scanf("%d", &age);
//	if (age >= 18 && age < 60)
//	{
//		printf("你已成年!\n");
//	}
//	else if (age >= 60)
//	{
//		printf("老人家!\n");
//	}
//	else
//	{
//		printf("小屁孩!\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("haha\n");
//	}
//	else
//	{
//		printf("666\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 2;
//	if (3 == a)
//	{
//		printf("666\n");
//	}
//	return 0;
//}

//*11. 判断一个数是奇数还是偶数

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d", &a);
//	if (0 == a % 2)
//	{
//		printf("偶数\n");
//	}
//	else
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}

//*12. 分别输出1~100之间的奇数和偶数
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("偶数:\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n奇数:\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 != i % 2)
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
//	int day = 0;
//	printf("请输入今天星期几:\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case(1):
//		printf("Monday\n");
//		break;
//	case(2):
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
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
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 6;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("workday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekday\n");
//		break;
//	default :
//		printf("输入错误!\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	switch (a)
//	{
//	case 1:
//		a++;
//	case 2:
//		b++;
//	case 3:
//		switch (a)
//		{
//		case 1:
//			a++;
//		case 2:
//			a++;
//			b++;
//			break;
//		}
//	case 4:
//		b++;
//		break;
//	default :
//		break;
//	}
//	printf("a = %d, b= %d\n",a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	/*int i = 1;
//	while ((i = getchar()) != EOF)
//	{
//		putchar(i);
//	}*/
//	char password[20] = { 0 };
//	char ch;
//	printf("请输入密码:\n");
//	scanf("%s", password);
//	printf("请确认Y/N:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	char a = getchar();
//	if (a == 'Y')
//	{
//		printf("登录成功\n");
//	}
//	else
//	{
//		printf("登录失败\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//		//初始化 //判断  //调整
//	for (a = 0; a < 10; a++)
//	{	 //前闭	 //后开
//		 //可以表示它的含义:10次循环
//		if (a = 5)
//		{
//			printf("hehe\n");
//		}
//		printf("666\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (;;)
//	{
//		printf("666\n");
//	}
//	return 0;
//}

//*13. 请问下面代码循环多少次？

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	do
//	{
//		if (a == 5)
//		{
//			continue;
//		}
//		printf("%d ", a);
//		a++;
//	} while (a < 10);
//	return 0;
//}

//*13.计算 n的阶乘.
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int jc = 1;
//	printf("请输入一个整数, 要求计算它的阶乘:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		jc *= i;
//	}
//	printf("%d\n", jc);
//	return 0;
//}

//*14.计算 1!+ 2!+ 3!+ …… + 10!
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int jc = 1;
//	int result = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		jc *= i;
//		result += jc;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//*15.在一个有序数组中查找具体的某个数字n.(讲解二分查找)

//*16.编写代码, 演示多个字符从两端移动, 向中间汇聚.
//
//*17.编写代码实现, 模拟用户登录情景, 并且只能登录三次.(只允许输入三次密码，如果密码正确则
//提示登录成, 如果三次均输入错误, 则退出程序.)
