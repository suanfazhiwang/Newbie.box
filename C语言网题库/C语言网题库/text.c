#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

////1000����һ��������5λ��������Ҫ�� 1��������Ǽ�λ�� 2���ֱ����ÿһλ���� 3�������������λ���֣�����ԭ��Ϊ321, Ӧ���123
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
////Ҫ��"China"������룬��������ǣ���ԭ����ĸ����ĵ�4����ĸ����ԭ������ĸ��
////
////���磬��ĸ"A"�����4����ĸ��"E"��"E"����"A"����ˣ�"China"Ӧ��Ϊ"Glmre"��
////
////���һ�����ø���ֵ�ķ���ʹcl��c2��c3��c4��c5���������ֵ�ֱ�Ϊ����C������h������i������n������a�����������㣬ʹc1��c2��c3��c4��c5�ֱ��Ϊ��G������l������m������r������e�����������
//
int main()
{
	int i = 0;
	char arr[6] = { '\0' };
	for (i = 0; i < 5; i++)//���ֵĻ�����һ����ȫ������
	{
		scanf("%c", arr + i);
		arr[i] = arr[i] + 4;
	}
	arr[5] = '\0';//���û������Ļ�����ӡ������������
	printf("%s", arr);
	return 0;
}



////��Ŀ 1004
////��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
////���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0 < n < 55)��n�ĺ�������Ŀ��������
////	n = 0��ʾ�������ݵĽ�������������
//
// //�ȷ�������������ô���� 1 2 3 4 6 9
// //���ִӵ����������ʼţ����������ȥ����������ϴ�ǰ�������   ǰ����ÿ��� ������������
// //������Ҫ�õ��ݹ��˼��
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



//��Ŀ 1005
//����һ�������¶ȣ�Ҫ����������¶ȡ���ʽΪ c = 5(F - 32) / 9��ȡλ2С����
//���룺һ�������¶ȣ�������
//����������¶ȣ�������λС��


int main()
{
	float f = 0;
	
	scanf("%f", &f);
	printf("%.2f", 5 * (f - 32) / 9);//������ѧ����������С������� %.1һλС�� %.2��λС���Դ�����
	
	return 0;
}



//��Ŀ 1006: [�������] �����������ֵ
//����������a b c, �ɼ������룬������е���������

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


//��Ŀ 1007: [�������] �ֶκ�����ֵ

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


//��Ŀ 1008: [�������] �ɼ�����

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


////��Ŀ 1084: ��ɸ����֮N�ڵ�������
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


//��Ŀ 1093: �ַ�����    ��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���   ���л��пո������

#include<stdio.h>
#include<string.h>
int main()
{
    int a = 0;
    int i = 0;
    char str[100] = { '\0' };
    char b = ' ';
    char str2[100] = { '\0' };
    scanf("%[^\n]", str);//�ص���"%[^\n]"!!!   ��˼�ǳ��˻��з�������ַ�ȫ������
    i = strlen(str);

    for (a = 0; a < i ; a++)//��һ������ʽ
    {
        str2[a] = str[i - 1 - a];
    }
    printf("%s", str2);



    for (a = 0; a < i / 2; a++)//�ڶ�������ʽ
    {
        b = str[a];
        str[a] = str[i - a - 1];
        str[i - a - 1] = b;
    }
    printf("%s", str);

    return 0;
}


//��Ŀ 1097: ���о���
//���ξ�������1��ʼ����Ȼ���������гɵ�һ�������������Ρ�

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
        for (i = sum, j = 0; i >= 0 && j <= sum, i--; j++)//���ֽṹ�����벻����
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



//��Ŀ 1115: DNA
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


