#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>






////�������������޶�������ֿ����ԵĴ��뷶Χ
////�������������ڣ������Ĵ���������֮���ʱ���
////int a = 5;//ȫ�ֱ���������Ϊ�������̻����Կ��ļ�//ȫ�ֱ������������ڣ��������������
//int main()
//{
//
//	int b = 3;//�ֲ�����������Ϊ��������//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int a = 2;//ȫ�ֱ�����ֲ��������ֳ�ͻʱ���Ծֲ�����Ϊ׼
//	//������ò�Ҫ����
//	printf("%d\n",a);
//
//	return 0;
//
//}



//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־
//�ַ�������һ���ַ�---��˫������������һ���ַ�
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
//	//��ӡ�ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//���룬��Ϊû��\0
//
//	return 0;
//
//}



//ת���
//int main()
//{
//	printf("c:\text\text.c");
//	//��� c:      ext     ext.c
//	//��Ϊ\t�ᱻ��Ϊ��ת���
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
//	//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//
//
//	return 0;
//}




//int main()
//{
//	int input = 0;//�����ֵ
//	printf("Ҫ�ú�ѧϰ��(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{ 
//		printf("������\n");
//	}
//	return 0;
//}




//
//int main()
//{
//	int line = 0;
//	//ѭ��
//	while(line<30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
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
	//�����ķ�ʽ���
	int sum = Add(num1, num2);

	printf("%d\n", sum);

	return 0;
}












