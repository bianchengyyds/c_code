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
//		printf("a��b��\n");
//	}
//	else if (a < b)
//	{
//		printf("b��a��\n");
//	}
//	else if (a == b)
//	{
//		printf("a����b\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("��ż��\n");
//	}
//	else if (a % 2 == 1)
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
// printf("������һ���������");
//	scanf("%d", &year);//���꣺���ĵı����Ҳ���һ�ٵı���,���İٵı���
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//int main()
//{
//    int day = 0;
//    printf("���������ڼ���");
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:printf("����һ\n");
//        break;
//    case 2:printf("���ڶ�\n");
//        break;
//    case 3:printf("������\n");
//        break;
//    case 4:printf("Thursday\n");
//        break;
//    case 5:printf("Friday\n");
//        break;
//    case 6:printf("Saturday\n");
//        break;
//    case 7:printf("Sunday\n");
//        break;
//    default:printf("����\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("����\n");
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
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("������һ��������");
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
//	printf("������һ������:");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("��ż��");
//	}
//	else if (num % 2 != 0)
//	{
//		printf("������");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	printf("������һ����ݣ�");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("���������ڼ���");
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
//		printf("����");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("���������ڼ���");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("����");
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
//	printf("�����ͣ�%d��ż���ͣ�%d", sum,sum2);
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
//	printf("�����ͣ�%d,ż���ͣ�%d\n", sum, sum2);
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
//	printf("�����ͣ�%d,ż���ͣ�%d\n", sum1, sum2);
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
//	printf("������%d,ż����%d\n", sum1, sum2);
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

//10.ģ���û���¼������ֻ�ܵ�¼���Σ�:
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123") == 0)//#include <stdlib.h>
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}

//9.��һ�����������в��Ҿ����ĳ������k��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}


//8.��1��10�Ľ׳���ӣ�
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

//7.for�����n�Ľ׳ˣ�
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
////6.while�����n�Ľ׳ˣ�
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
//	printf("������һ������:");
//	scanf("%d", &num);
//	if (num % 2 != 0)
//	{
//		printf("����");
//	}
//	else if (num % 2 == 0)
//	{
//		printf("ż��");
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
//	printf("���������ڼ�:");
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

//���������Ӵ�С�����
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
//	printf("������һ�����:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������", year);
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("���������ڼ�:");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
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

//��ӡ1��100֮�������3�ı�������
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

//�������������������������Լ��(շת�����)

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

//��ӡ100��200֮�������(�Գ���)
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
//		for (j = 2; j <= sqrt(i); j++) //i=a*b,��a��b��������һ����<=(��ƽ��i)
//		{						//sqrt():��ѧ�⺯������ƽ��
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



//��ʮ�������е����ֵ
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
//	int i = 0;//i:��
//	int j = 0;//j:��
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", j, i, j * i);//%2d:��λ�Ҷ���(��߲������ո�)
//		}											//%-2d:��λ�����(�ұ߲������ո�)
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
//	printf("������һ����Ҫ���ҵ�����");
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
//			printf("�±�:%d,ֵ:%d\n", i, arr[i]);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
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
//	printf("������һ����Ҫ���ҵ�����");
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
//			printf("�±�:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//			printf("�±�:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		printf("####���������룺#####\n");
//		int passwd = 0;
//		scanf("%d", &passwd);
//		if (passwd == 123)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		
//		else
//		{
//			printf("�������,����������\n");
//		}
//		i++;
//		
//	}
//	if (i == 3)
//	{
//		printf("����������Σ��˳�����");
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
//			printf("�±�:%d ", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
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
//    printf("����: ");
//    scanf("%d", &base);
//
//    printf("ָ��: ");
//    scanf("%d", &exponent);
//
//    while (exponent != 0)
//    {
//        result *= base;
//        --exponent;
//    }
//    printf("�����%lld", result);
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
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d ", sizeof(int));4(�ֽ�)
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
//�ж�
//if
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	printf("������һ�����:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������");
//	}
//	else
//		printf("��������");
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 6:
//		printf("������");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("error");
//	}
//	return 0;
//}


//ѭ��
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
//			printf("�ҵ���,�±���:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
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
//			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
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



//��ӡ1000��2000֮��������
// ��ӡ1��100֮�������3�ı���������
// //��һ��������n�η���
//ѭ�����26����ĸ��
// // //��n�Ľ׳ˡ�
//����1!+2!+3!+......+10!��
// //��1��100֮���������9�ĸ�����
// //���������Ӵ�С�����
//�������������������������Լ��(շת�����)��
//��ӡ100��200֮�������(�Գ���)��
//������ͣ�1/1 - 1/2 + 1/3 - 1/4 + 1/5 ... + 1/99 - 1/100 == ? ��
//��ʮ�������е����ֵ��
//���9*9�˷��ھ����
//��һ���������������в���ĳ�������������ӡ�����±꣬�Ҳ����򷵻��Ҳ���(���ַ�)��
//					������������n�Σ����ַ���������log�Զ�Ϊ�ף�nΪ�������Ĵ���
//��ʾ����ַ��������ƶ������м��ۡ�
//ģ���û���¼����������ֻ�ܵ�¼����(������ȷ�������¼�ɹ��������˳�����)��


