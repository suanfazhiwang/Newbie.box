#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node
{
    int data;                  //������
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
struct Node* creatNode(int data) //�������
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;//�ṹ�������ʼ��   �ṹ��������data�������β�
    newNode->next = NULL;//�ṹ����������ָ���ʼ��Ϊ��
    return newNode;

}

//��ӡ����
void printList(struct Node* headNode)
{
    struct Node* pMove = headNode->next;
    while (pMove != NULL)
    {
        printf("%d\n", pMove->data);
        pMove = pMove->next;
    }
    printf("\n");
}

//�����㣺�����������ĸ�����������������Ƕ��� 
//�����Ǳ�ͷ������Ҳ����ͷ�巨

void insertNodeBrHead(struct Node* headNode,int data)
{
    //1. ��������Ľ��
    struct Node* newNode = creatNode(data);
    //2. ��ʼ������   �������ڶϿ�
    newNode->next = headNode->next;
    headNode->next = newNode;
}

//�����ɾ����ָ��λ��ɾ�� 
void deleteNodeByAppoin(struct Node* headNode, int posData)
{
    struct Node* posNode = headNode->next;
    struct Node* posNodeFront = headNode;
    if (posNode == NULL)
        printf("�޷�ɾ������Ϊ�գ�\n");
    else
    {
        while (posNode->data != posData)
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

    insertNodeBrHead(list, 1);
    insertNodeBrHead(list, 2);
    insertNodeBrHead(list, 3);

    printList(list);//��ӡ���������321
    deleteNodeByAppoin(list, 2);//ɾ����2
    printList(list);//�����31
    system("pause");

    return 0;
}