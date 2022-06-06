#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++:先++后使用
//
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	int b = a++;//后置++:先使用后++
//
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}





//int main()
////逻辑&&与，全真才真，一假就假。
//{
//	int a = 10;
//	int b = 3;
//	int c = 0;
//	int d = a && b;
//	int e = a && c;
//
//	printf("%d\n", d);//1
//	printf("%d\n", e);//0
//
//	return 0;
//
//}




//int main()
////逻辑||与，有真就真，全假才假。
//{
//	int a = 10;
//	int b = 3;
//	int c = 0;
//	int f = 0;
//	int d = a || b;
//	int e = a || c;
//	int g = c || f;
//
//	printf("%d\n", d);//1
//	printf("%d\n", e);//1
//	printf("%d\n", g);//0
//
//	return 0;
//
//}




//int main()
//{
//	int a = 5;
//	int b = 10;
//	int c = 3;
//	int max = 0;
//	int min = 0;
//
//	//exp1? exp2: exp3
//	//exp1成立，exp2计算，整个表达式结果是exp2的结果
//	//exp1不成立，exp3计算，整个表达式结果是exp3的结果
//	max = a > b ? a : b;
//	min = a < c ? a : c;
//
//	printf("%d\n", max);//10
//	printf("%d\n", min);//3
//
//	return 0;
//
//}




//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = 10;
//	int d = (a = b - 3, c = a + b, b = b + c);
//	//exp1, exp2, exp3, ..,expN  逗号表达式：逗号隔开的一串表达式
//	//从左向右依次计算，整个表达式结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//
//	return 0;
//
//}




//typedef unsigned int u_int;//重命名类型名字
//
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 5;
//
//	return 0;
//
//}



//void test()
//{
//	int a = 1;
//	a++;
// 
//	printf("%d\n", a);
//}
////未用static修饰局部变量，局部变量到了生命周期结束自动销毁，下次进入生命周期重新建立
//
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//
//}
////结果是一串2




//void test()
//{
//	static int a = 1;
//	a++;
//
//	printf("%d\n", a);
//
//}
////static 修饰局部变量改变了局部变量的生命周期
////让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//
//	return 0;
//
//} 
////结果是2-11



////#define定义宏
//#define ADD(x,y) ((x)+(y))
//#define jian(x,y) x-y
//int main()
//{
//	int a = ADD(5, 3);
//	int b = 10 * ADD(5, 3);
//	int c = jian(5, 3);
//	int d = 10 * jian(5, 3);
//
//	printf("%d\n", a);//8
//	printf("%d\n", b);//80
//	printf("%d\n", c);//2
//	printf("%d\n", d);//47这是因为define定义的宏是替换，定义的jian(x,y)这个函数有缺陷，需要加括号。
//
//	return 0;
//
//}




//int main()
//{ 
//	int a = 10;//在内存中要分配的空间4个字节
//	printf("%p\n", &a);//%p专门用来打印地址
//
//	int* pa = &a;//pa用来存放地址在c语言中pa是指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//
//	char b = 'c';
//	char* pb = &b;
//
//	*pa = 20;//*解引用操作*pa就是通过pa里面的地址找到a
//	printf("%d\n", a);//打印出来a变成20，说明可以通过pa改变a
//
//	return 0;
//
//}




//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//发现都是4个字节指针的大小是相同的指针式用来存放地址的
//	//指针需要多大空间取决于地址的存储需要多大空间
//	//32位机器存储一个量32bit也就是4个字节
//	//如果是64位机器的话就是64bit也就是8个字节 
//
//	return 0;
//
//}




//结构体可以让c语言创建出新的类型出来
//创建一个学生
//struct Stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//
//};
//int main()
//{
//	struct Stu s = { "张三",20,85.5 };//结构体的创建
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//
//	struct Stu* ps = &s;
//	printf("2: %s,%d,%lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s,%d,%lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
//
//	return 0;
//
//}