#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>






////变量的作用域：限定这个名字可用性的代码范围
////变量的生命周期：变量的创建和销毁之间的时间段
////int a = 5;//全局变量作用域为整个工程还可以跨文件//全局变量的生命周期：程序的生命周期
//int main()
//{
//
//	int b = 3;//局部变量作用域为大括号内//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int a = 2;//全局变量与局部变量名字冲突时，以局部变量为准
//	//但是最好不要这样
//	printf("%d\n",a);
//
//	return 0;
//
//}



//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//字符串就是一串字符---用双引号括起来的一串字符
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	int len = strlen("abc");
//
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15
//	printf("%d\n", len);//3
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//乱码，因为没有\0
//
//	return 0;
//
//}



//转义符
//int main()
//{
//	printf("c:\text\text.c");
//	//结果 c:      ext     ext.c
//	//因为\t会被认为是转义符
//
//	return 0;
//
//}
//
//
//
//
//int main()
//{
//
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c");
//	printf("\a");
//	//abc   a   "   '	c:\test\test.c
//
//	//printf在打印数据的时候，可以指定打印的格式
//
//
//	return 0;
//}




//int main()
//{
//	int input = 0;//输入的值
//	printf("要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{ 
//		printf("卖红薯\n");
//	}
//	return 0;
//}




//
//int main()
//{
//	int line = 0;
//	//循环
//	while(line<30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}




int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	
	//int sum = num1 + num2;
	//函数的方式解决
	int sum = Add(num1, num2);

	printf("%d\n", sum);

	return 0;
}












