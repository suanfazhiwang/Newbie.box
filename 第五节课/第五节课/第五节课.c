#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int password[20] = { 0 };
//	
//
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）\n");
//	int a = getchar();
//
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//
//}
//发现在这个程序运行过程中输入密码摁下回车后会直接显示确认失败
//原因在于摁下回车后scanf只会读取输入的密码而不会读取回车也就是\n
//导致缓冲区仍有\n，所以getchar会直接读取缓冲区的\n导致确认失败
//所以我们需要清除缓冲区




//int main()
//{
//	int password[20] = { 0 };
//
//
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）\n");
//	getchar();//这行代码的作用在于会清除缓冲区的\n，使得缓冲区为空的状态
//	int a = getchar();
//
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//
//}
//这样做代码可以运行成功
//但是这串代码还是有问题，如果输入的密码中带有空格的话，还是和上面代码一样的问题
//所以我们需要批量的清除缓冲区



//
//int main()
//{
//	int password[20] = { 0 };
//
//
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）\n");
//	while ((getchar() != '\n'))
//	{
//		;
//	}
//
//	int a = getchar();
//
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//
//}
////利用while循环我们可以把整个缓冲区全部清理，程序得以正常运行！





//int main()
//{
//    int sum = 0;
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    while (a <= b)
//    {
//        sum = sum + a;
//        a++;
//
//    }
//    printf("sum = %d", sum);
//    return 0;
//}




