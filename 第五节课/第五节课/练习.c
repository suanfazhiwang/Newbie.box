#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &i);
//	for (a = 1; a <=i ; a++)
//	{
//		num = num * a;
//	}
//	printf("%d", num);
//
//
//	return 0;
//}




//{
////int main()
////{
////	int a = 1;
////	int b = 1;
////	int num = 1;
////	int i = 0;
////	for (a = 1; a < 11; a++)
////	{
////		for (b=1; b <=a; b++)
////		{
////			num = num * b;
////		}
////		i = i + num;
////		num = 1;
////	}
////	printf("%d", i);
////
////	return 0;
////
////}
//
////int main()
////{
////	int a = 1;
////	int num = 0;
////	int i = 1; 
////	for (a = 1; a < 11; a++)
////	{
////		i = i * a;
////		num = num + i;
////	}
////	printf("%d", num);
////
////	return 0;
////
////}
//}
//����1��+2��++++++10��




////��һ��������������Ҿ����ĳ�����֡�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int key = 11;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//
//		}
//		else
//		{
//			break;
//		}
//
//	}
//	if (left <= right)
//
//		printf("�ҵ���key�������±���%d", mid);
//	else
//		printf("�Ҳ���");
//
//
//	return 0;
//}




////ģ��һ����������Ľ���
//#include <string.h>
//int main()
//{
//	int a = 0;
//	
//	char password[20] = { 0 };
//	for (a = 0; a < 3; a++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp�������Ƚ��ַ�����
//		//�Ƚϵ����ַ�����Ӧ�±���ַ���ascllֵ
//		//����  abcde  ��  abccaaa  ���ǵڶ����Ƚϴ�
//		//����Ϊ��һ���ڵڶ�����>0,��֮����<0����һ���ڵڶ�����0
//		{
//			printf("��½�ɹ�");
//			break;
//
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//		
//	}
//	if (a == 3)
//		printf("��������������˳�����");
//
//	return 0;
//}




////дһ����������Ϸ
////1. �Զ�����һ��1-100֮��������
////2. ������
////  a. �¶��ˣ��͹�ϲ�㣬��Ϸ����
////  b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
////3. ��Ϸ����һֱ�棬�����˳���Ϸ
//#include <stdlib.h>
//#include <time.h>
//
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("��������Ҫ�µ����֣�>");
//		scanf("%d", &input);
//		if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶�������������%d\n", input);
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("*******************************\n");
//	printf("**********�Ƿ�ʼ��Ϸ**********\n");
//	printf("**********ѡ��1��ʼ��Ϸ*********\n");
//	printf("**********ѡ��2�˳���Ϸ*********\n");
//	printf("*******************************\n");
//
//
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		case 3:
//			printf("ѡ�����������ѡ�񣡣�>\n");
//			break;
//		}
//	} 
//	while (input!=2);
//	
//	return 0;
//}




//int is_leap_year(int x)
//{
//	int j = x;
//	if (j % 4 == 0 && j % 100 != 0 || j % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d\n", y);
//		}
//	}
//	return 0;
//}




//int binary_search(int a[], int k, int s)
//{
//    int left = 0;
//    int right = s - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (a[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if (a[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int key = 10;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //�ҵ��ľͷ����ҵ�λ�õ��±�
//    //�Ҳ����ͷ���-1
//    int ret = binary_search(arr, key, sz);
//    if (-1 == ret)
//    {
//        printf("�Ҳ���\n");
//    }
//    else
//    {
//        printf("�ҵ��ˣ��±���%d\n", ret);
//    }
//
//    return 0;
//
//}




//void add(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    add(&num);
//    printf("%d\n", num);
//
//    add(&num);
//    printf("%d\n", num);
//
//    add(&num);
//    printf("%d\n", num);
//    return 0;
//}




//#include <stdio.h>
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}




//void print(unsigned int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//
//int main()
//{
//    unsigned int num = 0;//����һ���޷��ŵ�int
//    scanf("%u", &num);
//    //�ݹ�-�Լ������Լ�
//    print(num);
//    return 0;
//
//}




//void test(int n)
//{
//    if (n < 10000)
//    {
//        test(n + 1);
//    }
//}
//
//int main()
//{
//    test(1);
//    return 0;
//}




//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//
//int main()
//{
//    char arr[] = "hehe";
//    //['h']['e']['h']['e']['\0']
//    //strlen�ڼ����ַ������ȵ�ʱ�򲻻����\0
//    printf("%d\n", my_strlen(arr));
//}




//my_strlen("he");
//1+my_strlen("e");
//1+1+my_strlen("");
//1+1+0 = 2
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(str + 1);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    char arr[] = "hehe";
//    printf("%d\n", my_strlen(arr));
//}




//int factorial(int n)
//{
//    if (n > 1)
//    {
//        return(n * factorial(n - 1));
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", factorial(a));
//        return 0;
//}




//int fab(int f)
//{
//    if (f > 2)
//    {
//        return (fab(f - 1) + fab(f - 2));
//    }
//    else
//    {
//        return 1;
//    }
//}
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//
//    printf("%d\n", fab(a));
//    return 0;
//}




//int count = 0;//����һ��ȫ�ֱ���
//
//int fib(int f)
//{
//    if (f == 3)//������3��쳲���������ʱ��count+1
//    {
//        count++;
//    }
//    if (f > 2)
//    {
//        return (fib(f - 1) + fib(f - 2));
//    }
//    else
//    {
//        return 1;
//    }
//}
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//
//    printf("%d\n", fib(a));
//    printf("count=%d\n", count);
//    return 0;
//}




int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int a = 0;
    scanf("%d", &a);

    printf("%d\n", fib(a));

    return 0;
}