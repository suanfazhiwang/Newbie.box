#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("����\n");
//	else//���û�д�����if��elseֻ�ܿ���һ�����
//	{
//		printf("δ����\n");
//		printf("����̸����");   
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
//		printf("δ����\n");
//	else if (age >= 18 && age < 26)//��ʵ������&&ǰ�������ǿ��Բ�д���߼�Ҳ��ͨ˳��
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if ( age > 40 && age < 60)
//		printf("������\n");
//	else
//		printf("����\n");
//
//	if (18 <= age < 26)
//		printf("������");//������������ʲô�����䶼��ִ��
//	//ԭ������18<=age<26���ִ���߼�������������18<=age�õ��Ľ������������߼�
//	//Ҳ����1����0��1��0����26С���Ի�ִ��
//	//��ʱ����Ҫ�ò������&&
//	return 0;
//
//}




//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("�Ǻ�");
//	else
//			printf("haha");
//	//ʲôҲ����ӡ��Ϊelse������������ifƥ��
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
//			printf("�Ǻ�");
//		}
//		  
//	}
//	else
//	{
//		printf("haha");
//	}
//	//��ӡhaha
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
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
//		printf("����1 ");
//	case 2:
//		printf("����2 ");
//	case 3:
//		printf("����3 ");
//	case 4:
//		printf("����4 ");
//	case 5:
//		printf("����5 ");
//	case 6:
//		printf("����6 ");
//	case 7:
//		printf("����7 ");
//
//	}
//	//��������������Ļ��������뼸�ͻὫ���ͺ������䶼��ӡ����
//	//��������5�ͻ��ӡ����5 ����6 ����7 
//	//ԭ������û��break
//	//case����Ϊһ�����ֻҪ����������䶼��ִ��
//	//break����������ֹͣ
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
//		printf("����1 ");
//		break;
//	case 2:
//		printf("����2 ");
//		break;
//	case 3:
//		printf("����3 ");
//		break;
//	case 4:
//		printf("����4 ");
//		break;
//	case 5:
//		printf("����5 ");
//		break;
//	case 6:
//		printf("����6 ");
//		break;
//	case 7:
//		printf("����7 ");
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
//		printf("�������\n");
//		break;
//		//default����д������б���κ�λ��
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
//}//�����1 2 3 4 break����������ֻҪ��ѭ��������breakֱ����ֹѭ��
////while�е�break������������ֹѭ����




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
//}//�������н����������ѭ��������Ϊ1 2 3 4 ���ǳ��򲻻�ֹͣ
////ԭ������continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ��continue����Ĵ��벻����ִ��
////��ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�




int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	 
	return 0;
}
//ctrl+z �ͻ�ʹ��getchar��ȡ��EOF�Ӷ���ȡ����