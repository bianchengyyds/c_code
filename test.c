#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//34.��arr���������ų�����ʹ��ð������
//void bubble_sort(int arr[], int sz)
//{
//	//arr�����飬������д���ʱ���ݹ�ȥ����������Ԫ�صĵ�ַ��&arr[0]
//	
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; //������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) //ÿһ��ð������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //���������������ʵ����ȫ����
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
//	bubble_sort(arr, sz); //ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//33.ѭ�������n��쳲���������
//int fib(int x)
//{
//	int a = 1;//a��c����ߵĵڶ�����
//	int b = 1;//b��c����ߵĵ�һ����
//	int c = 1;//c���µĽ��
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

//32.�ݹ飬���n��쳲�����������ʵ�ã���
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

//31.�ݹ飬��n�Ľ׳ˣ�
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

//30.�ݹ飬���ַ����ĳ��ȣ�
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

//29.ѭ�������ַ����ĳ��ȣ�
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ��
//	printf("len = %d\n", len);
//	return 0;
//}

//28.�ݹ飬����123����ӡ1 2 3 ��
//void print(int n)	//1. n = 123
//{
//	if (n > 9)
//	{
//		print(n / 10);	//2. n = 12    3. n = 1
//	}
//	printf("%d ,", n % 10);	//ִ��˳��1.2.3.2.1.
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//27.��ʽ����1.��
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

//26.��ʽ����2.��
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//25.Ƕ�׵��ã�
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

//24.дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//void Add(int* p)
//{
//	(*p)++; //   ++���ȼ�����*
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

//23.дһ��������ʵ��һ��������������Ķ��ֲ��ң�
//int binary_search(int arr[], int k, int sz) //������arr��һ��ָ��
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //�м�Ԫ�ص��±�
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
//	int ret = binary_search(arr, k, sz); //���ݵ�������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//22.дһ���������ж�1000��2000֮������꣺
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
//		if (is_leap_year(year) == 1) //is_leap_year : �Զ��庯�����ж��Ƿ�������
//			printf("%d ", year);
//	}
//	return 0;
//}


//21.дһ����������ӡ100��200֮���������
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
//		if (is_prime(i) == 1) //is_prime :�Զ��庯�����ж��Ƿ�������
//			printf("%d ", i);
//	}
//	return 0;
//}


//20.��������Ϸ��
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//19.��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j); //%-2d:��λ�������
//		}
//		printf("\n");
//	}
//	return 0;
//}

//18.��ʮ�����е����ֵ��
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

//17.����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5... + 1 / 99 - 1 / 100��ֵ��
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i; // 1/1-1/2+1/3-1/4+1/5...+1/99-1/100
//		flag = -flag;		//����������
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//16.��һ��1��100֮�乲���ֶ��ٸ�����9��
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


//15.��ӡ100��200֮���������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2) //ż��һ����������
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) //sqrt����ѧ�⺯������ƽ��
//		{								//�Գ���������2��i-1֮�����
//			if (i % j == 0)				//����i=a*b,��a��b��������һ����<=sqrt(i)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}								//������ֻ�ܱ�1�ͱ�������������
//	printf("\ncount = %d\n", count);
//	return 0;
//}




//14.��ӡ1000��2000֮������꣺
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
//		}//���꣺1.�ܱ�4�������Ҳ��ܱ�100����
//		//	     2.�ܱ�400����
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//13.�������������Լ����
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
//	}//շת�����
//	printf("%d ", b);
//	return 0;
//}


//12.��ӡ1��100֮�����3�ı�����������
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


//11.�����������Ӵ�С����
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


//6.while�����n�Ľ׳ˣ�
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
//5.��do...while���1��10֮���������
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
//4.��for���1��10֮���������
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}
//3.��while���1��10֮���������
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
//2.���1��100֮���������
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
// 1.�ж�һ��������������ż����
// 
//int main()
//{
//	int shu = 0;
//	scanf("%d\n", &shu);
//	if (shu % 2 != 0)
//	{
//		printf("�����������");
//	}
//	else
//		printf("�����Ϊż��");
//	return 0;
//}
//	

//}