#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++:��++��ʹ��
//
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	int b = a++;//����++:��ʹ�ú�++
//
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}





//int main()
////�߼�&&�룬ȫ����棬һ�پͼ١�
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
////�߼�||�룬������棬ȫ�ٲż١�
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
//	//exp1������exp2���㣬�������ʽ�����exp2�Ľ��
//	//exp1��������exp3���㣬�������ʽ�����exp3�Ľ��
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
//	//exp1, exp2, exp3, ..,expN  ���ű��ʽ�����Ÿ�����һ�����ʽ
//	//�����������μ��㣬�������ʽ��������һ�����ʽ�Ľ��
//
//	printf("%d\n", d);
//
//	return 0;
//
//}




//typedef unsigned int u_int;//��������������
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
////δ��static���ξֲ��������ֲ����������������ڽ����Զ����٣��´ν��������������½���
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
////�����һ��2




//void test()
//{
//	static int a = 1;
//	a++;
//
//	printf("%d\n", a);
//
//}
////static ���ξֲ������ı��˾ֲ���������������
////�þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ���
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
////�����2-11



////#define�����
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
//	printf("%d\n", d);//47������Ϊdefine����ĺ����滻�������jian(x,y)���������ȱ�ݣ���Ҫ�����š�
//
//	return 0;
//
//}




//int main()
//{ 
//	int a = 10;//���ڴ���Ҫ����Ŀռ�4���ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//
//	int* pa = &a;//pa������ŵ�ַ��c������pa��ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//
//	char b = 'c';
//	char* pb = &b;
//
//	*pa = 20;//*�����ò���*pa����ͨ��pa����ĵ�ַ�ҵ�a
//	printf("%d\n", a);//��ӡ����a���20��˵������ͨ��pa�ı�a
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
//	//���ֶ���4���ֽ�ָ��Ĵ�С����ͬ��ָ��ʽ������ŵ�ַ��
//	//ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
//	//32λ�����洢һ����32bitҲ����4���ֽ�
//	//�����64λ�����Ļ�����64bitҲ����8���ֽ� 
//
//	return 0;
//
//}




//�ṹ�������c���Դ������µ����ͳ���
//����һ��ѧ��
//struct Stu
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//
//};
//int main()
//{
//	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ���
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//
//	struct Stu* ps = &s;
//	printf("2: %s,%d,%lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s,%d,%lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
//
//	return 0;
//
//}