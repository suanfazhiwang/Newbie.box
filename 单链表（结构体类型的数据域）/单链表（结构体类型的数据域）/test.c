#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//������ʾ��ʵ�ʹ������������������һ���ṹ��ʱ�������
//���ȴ���һ���ṹ��
struct student
{
    char name[20];
    int math;
    int num;
};

struct Node
{
    struct student data;                  //������
    struct Node* next;         //ָ����

};

//����������ʵ���Ǵ���һ������ͷ����ʾ��������
//����ͷ��û��������ģ�ֻ��ָ����
//Ҳ����˵����ͷ���洢����ֻ��һ��ָ����һ������ָ��
struct Node* creatList() //��������
{
    struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));//��̬�ڴ����
    //��̬�ڴ�����    headNode �ͳ�Ϊ�˽ṹ�����
    //����ʹ��ǰ�����ʼ��
    //headNode->data = 1;
    headNode->next = NULL;
    return headNode;
}

//ΪʲôҪ��װһ���������Ĺ��ܣ�
//�ڲ�����ʱ��Ҫ�õ�
struct Node* creatNode(struct student data) //�������
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//��̬�ڴ����

    newNode->data = data;//�ṹ�������ʼ��   �ṹ��������data�������β�
    newNode->next = NULL;//�ṹ����������ָ���ʼ��Ϊ��
    return newNode;

}

//��ӡ����
void printList(struct Node* headNode)
{
    struct Node* pMove = headNode->next;//����һ��ָ��������ӡ����
    printf("name\tnum\tmath\n");
        while (pMove != NULL)//pMove == NULLʱ��ʵ�����������������
        {
            //�ڽṹ���ӡ��ʱ������
            printf("%s\t%d\t%d\n", pMove->data.name, pMove->data.num, pMove->data.math);
            pMove = pMove->next;//��ӡһ��pMove����Ųһ��
        }
    printf("\n");
}

//�����㣺�����������ĸ�����������������Ƕ��� 
//�����Ǳ�ͷ������Ҳ����ͷ�巨
void insertNodeByHead(struct Node* headNode, struct student data)
{
    //1. ��������Ľ��
    struct Node* newNode = creatNode(data);
    //2. ��ʼ������   �������ڶϿ�
    newNode->next = headNode->next;
    headNode->next = newNode;
}

//�����ɾ����ָ��λ��ɾ�� 
//����ֻ��Ҫ�ҵ�posNode��posNodeFront�Ϳ���
//��posNodeFront->next��ΪposNode->next�����ɾ��

void deleteNodeByAppoinNum(struct Node* headNode, int num)
{
    struct Node* posNode = headNode->next;
    struct Node* posNodeFront = headNode;
    if (posNode == NULL)
        printf("�޷�ɾ������Ϊ�գ�\n");
    else
    {
        while (posNode->data.num != num)//һ��һ��������
        {
            posNodeFront = posNode;
            posNode = posNodeFront->next;
            if (posNode == NULL)
            {
                printf("δ�ҵ������Ϣ�޷�ɾ����\n");
                return;
            }

        }
        posNodeFront->next = posNode->next;
        free(posNode);
    }
}

int main()
{
    struct Node* list = creatList();//����Ҳ�����Ҵ�����һ����list������
    struct student info;
    while (1)
    {
        printf("������ѧ�������� ѧ�� ��ѧ�ɼ���\n");
        scanf("%s%d%d", info.name, &info.num, &info.math);//��������Կ����ṹ��ĵ�һ��Ԫ�ؾ���һ����ַ
        setbuf(stdin, NULL);//��ջ�����

        insertNodeByHead(list, info);
        printf("�Ƿ������(Y/N)?\n");

        setbuf(stdin, NULL);//��ջ�����
        int choice = getchar();
        if (choice == 'n' || choice == 'N')
        {
            break;
        }

    }
    printList(list);
    printf("������Ҫɾ����ѧ����ѧ�ţ�\n");
    scanf("%d", &info.num);

    deleteNodeByAppoinNum(list, info.num);


    printList(list);
    system("pause");

    return 0;
}