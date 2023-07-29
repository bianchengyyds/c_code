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

#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个整数:\n");
	scanf("%d%d\n", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}