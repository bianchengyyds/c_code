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
//
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