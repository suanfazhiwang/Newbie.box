#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年\n");
//	else//如果没有大括号if和else只能控制一条语句
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱");   
//	}
//
//	return 0;
//
//}




//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 26)//其实在这里&&前面的语句是可以不写的逻辑也是通顺的
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if ( age > 40 && age < 60)
//		printf("中老年\n");
//	else
//		printf("老年\n");
//
//	if (18 <= age < 26)
//		printf("有问题");//发现无论输入什么这个语句都会执行
//	//原因在于18<=age<26语句执行逻辑是这样的首先18<=age得到的结果可能是真或者假
//	//也就是1或者0，1和0都比26小所以会执行
//	//这时候需要用并列语句&&
//	return 0;
//
//}




//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("呵呵");
//	else
//			printf("haha");
//	//什么也不打印因为else和他里的最近的if匹配
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("呵呵");
//		}
//		  
//	}
//	else
//	{
//		printf("haha");
//	}
//	//打印haha
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("偶数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//	return 0;
//
//}




//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if ( 1 == a % 2 )
//			printf("%d ", a);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case 1:
//		printf("星期1 ");
//	case 2:
//		printf("星期2 ");
//	case 3:
//		printf("星期3 ");
//	case 4:
//		printf("星期4 ");
//	case 5:
//		printf("星期5 ");
//	case 6:
//		printf("星期6 ");
//	case 7:
//		printf("星期7 ");
//
//	}
//	//如果代码是这样的话发现输入几就会将几和后面的语句都打印出来
//	//比如输入5就会打印星期5 星期6 星期7 
//	//原因在于没有break
//	//case被视为一个入口只要进入后面的语句都会执行
//	//break叫跳出或者停止
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期1 ");
//		break;
//	case 2:
//		printf("星期2 ");
//		break;
//	case 3:
//		printf("星期3 ");
//		break;
//	case 4:
//		printf("星期4 ");
//		break;
//	case 5:
//		printf("星期5 ");
//		break;
//	case 6:
//		printf("星期6 ");
//		break;
//	case 7:
//		printf("星期7 ");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//		//default可以写在语句列表的任何位置
//	}
//	return 0;
//}





//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    scanf("%d", &c);
//
//    if (a > b)
//    {
//        if (a < c)
//            printf("%d", a);
//        else if (b > c)
//            printf("%d", b);
//        else
//            printf("%d", c);
//
//    }
//    else
//    {
//
//        if (b < c)
//            printf("%d", b);
//        else if (a > c)
//            printf("%d", a);
//        else
//            printf("%d", c);
//    }
//    return 0;
//}





//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++; 
//	}
//
//	return 0;
//
//}




//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//结果是1 2 3 4 break的作用在于只要在循环中遇到break直接终止循环
////while中的break是用于永久终止循环的




//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//
//
//	return 0;
//
//}//发现运行结果进入了死循环输出结果为1 2 3 4 但是程序不会停止
////原因在于continue是用于终止本次循环的，也就是本次循环continue后面的代码不会再执行
////会直接跳转到while语句的判断部分，进入下一次循环的入口判断




int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	 
	return 0;
}
//ctrl+z 就会使得getchar读取到EOF从而读取结束