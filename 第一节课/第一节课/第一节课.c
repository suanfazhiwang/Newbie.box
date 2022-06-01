#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("woaisyy\n");
//
//	return 0;
//
//}





//int main()
////关于字符类型
//{
// 
//	char ch = 'a';//字符类型
//	int age = 20;//整型
//	short num = 10;//短整型
//	float weight = 55.5;//单精度浮点型
//	double d = 0.0;//双精度浮点型
// 
//	return 0;
//
//}





//int main()
////sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//{
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
// 
//}





//int main()
////创建变量和变量的最简单运算
//{
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);//%d整型
//	printf("%lf\n", weight);//%f-float  %lf-double
//
//	return 0;
//
//}





int main()
//写一个代码求2个整数的和
//scanf函数是输入函数
//如果scanf函数报错不安全
//就把这行代码
//#define _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	sum = a + b;

	printf("%d\n", sum);
	return 0;

}

