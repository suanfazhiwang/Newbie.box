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
//计算1！+2！++++++10！




////在一个有序数组里查找具体的某个数字。
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
//		printf("找到了key的数组下标是%d", mid);
//	else
//		printf("找不到");
//
//
//	return 0;
//}




////模拟一个密码输入的界面
//#include <string.h>
//int main()
//{
//	int a = 0;
//	
//	char password[20] = { 0 };
//	for (a = 0; a < 3; a++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp是用来比较字符串的
//		//比较的是字符串对应下标的字符的ascll值
//		//比如  abcde  和  abccaaa  就是第二个比较大
//		//返回为第一大于第二返回>0,反之返回<0，第一等于第二返回0
//		{
//			printf("登陆成功");
//			break;
//
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//		
//	}
//	if (a == 3)
//		printf("三次密码均错误，退出程序");
//
//	return 0;
//}




////写一个猜数字游戏
////1. 自动产生一个1-100之间的随机数
////2. 猜数字
////  a. 猜对了，就恭喜你，游戏结束
////  b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
////3. 游戏可以一直玩，除非退出游戏
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
//		printf("请输入你要猜的数字：>");
//		scanf("%d", &input);
//		if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对啦！！！就是%d\n", input);
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("*******************************\n");
//	printf("**********是否开始游戏**********\n");
//	printf("**********选择1开始游戏*********\n");
//	printf("**********选择2退出游戏*********\n");
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
//			printf("选择错误，请重新选择！：>\n");
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
//    //找到的就返回找到位置的下标
//    //找不到就返回-1
//    int ret = binary_search(arr, key, sz);
//    if (-1 == ret)
//    {
//        printf("找不到\n");
//    }
//    else
//    {
//        printf("找到了，下标是%d\n", ret);
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
//    unsigned int num = 0;//设置一个无符号的int
//    scanf("%u", &num);
//    //递归-自己调用自己
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
//    //strlen在计算字符串长度的时候不会计算\0
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




//int count = 0;//定义一个全局变量
//
//int fib(int f)
//{
//    if (f == 3)//当计算3的斐波那契数的时候count+1
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