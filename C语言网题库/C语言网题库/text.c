#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

////1000给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321, 应输出123
void meigeshu(int a)
{
	int c = 0;
	c = a % 10;
	if (a >= 10)
	{
		meigeshu(a / 10);

	}
	printf("%d ",c);
	
}

int main()
{
	int a = 0;
	int c = 0;
	int arr[5] = { 0 };
	int i = 0;
	scanf("%d", &a);
	for (i = a; i > 0; i = i / 10)
	{
		c++;
	}


	printf("%d\n", c);

	meigeshu(a);

	printf("\n");

	for (i = 0; i < c; i++)
	{
		arr[i] = a % 10;
		a = a / 10;
		printf("%d", arr[i]);
	}
	return 0;
}



////1003
////要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
////
////例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
////
////请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。
//
int main()
{
	int i = 0;
	char arr[6] = { '\0' };
	for (i = 0; i < 5; i++)//这种的话可以一下子全部输入
	{
		scanf("%c", arr + i);
		arr[i] = arr[i] + 4;
	}
	arr[5] = '\0';//如果没有这个的话，打印出来会有乱码
	printf("%s", arr);
	return 0;
}



////题目 1004
////有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
////输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0 < n < 55)，n的含义如题目中描述。
////	n = 0表示输入数据的结束，不做处理。
//
// //先分析数到底是怎么样的 1 2 3 4 6 9
// //发现从第五年年初开始牛的数量等于去年的数量加上大前年的数量   前四年每年的 数量等于年数
// //我们需要用到递归的思想
// 
int sheng(int a)    
{
	
	if (a > 4)
	{
		return sheng(a - 1) + sheng(a - 3);
	}
	else
	{
		return a;
	}
}

int main()
{
	int a = 1;
	while (a != 0)
	{
		scanf("%d", &a);
		if (a > 0)
		{
			printf("%d\n", sheng(a));
		}
	}

	return 0;

}



//题目 1005
//输入一个华氏温度，要求输出摄氏温度。公式为 c = 5(F - 32) / 9，取位2小数。
//输入：一个华氏温度，浮点数
//输出：摄氏温度，浮点两位小数


int main()
{
	float f = 0;
	
	scanf("%f", &f);
	printf("%.2f", 5 * (f - 32) / 9);//在这里学到浮点数的小数点控制 %.1一位小数 %.2两位小数以此类推
	
	return 0;
}



//题目 1006: [编程入门] 三个数找最大值
//有三个整数a b c, 由键盘输入，输出其中的最大的数。

int main()
{
	int a = 0;
	int c = 0;
	int b = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b)
	{
		if (a >= c)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", c);
		}
	}
	else
	{
		if (b >= c)
			printf("%d", b);
		else
			printf("%d", c);
	}

	return 0;
}


//题目 1007: [编程入门] 分段函数求值

#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a < 1)
        printf("%d", a);
    else if (a >= 10)
        printf("%d", 3*a - 11);
    else
        printf("%d", 2*a - 1);

    return 0;
}


//题目 1008: [编程入门] 成绩评定

#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a >= 90)
        printf("A");
    else if (a >= 80)
        printf("B");
    else if (a >= 70)
        printf("C");
    else if (a >= 60)
        printf("D");
    else
        printf("E");
    return 0;

}


////题目 1084: 用筛法求之N内的素数。
//
#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0;
    int b = 0;
    int i = 0;
    int count = 0;
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        count = 0;
        for (b = 2; b <= sqrt(i); b++)
        {
            if (i % b == 0)
            {
                count++;
            }
        }
        if (count == 0)
            printf("%d\n", i);
    }

    return 0;
}


//题目 1093: 字符逆序    将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。   其中会有空格的输入

#include<stdio.h>
#include<string.h>
int main()
{
    int a = 0;
    int i = 0;
    char str[100] = { '\0' };
    char b = ' ';
    char str2[100] = { '\0' };
    scanf("%[^\n]", str);//重点是"%[^\n]"!!!   意思是除了换行符以外的字符全部接收
    i = strlen(str);

    for (a = 0; a < i ; a++)//第一种逆序方式
    {
        str2[a] = str[i - 1 - a];
    }
    printf("%s", str2);



    for (a = 0; a < i / 2; a++)//第二种逆序方式
    {
        b = str[a];
        str[a] = str[i - a - 1];
        str[i - a - 1] = b;
    }
    printf("%s", str);

    return 0;
}


//题目 1097: 蛇行矩阵
//蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。

#include<stdio.h>
int main()
{
    int a = 1;
    int arr[5][5] = { 0 };
    int i = 0;
    int j = 0;
    int sum = 0;
    for (sum = 0; sum <= 5; sum++)
    {
        for (i = sum, j = 0; i >= 0 && j <= sum, i--; j++)//这种结构是我想不到的
        {
            arr[i][j] = a;
            a++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}



//题目 1115: DNA
int main()
{
    
    int i = 0;
    int j = 0;
    char arr[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j || i + j == 4)
                arr[i][j] = 'X';
            else
                arr[i][j] = ' ';
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    for (int a = 0; a < 3; a++)
    {
        for (i = 1; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
    

    return 0;
}


