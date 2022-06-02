#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node
{
    int data;                  //数据域
    struct Node* next;         //指针域

};

//创建链表其实就是创建一个链表头来表示整个链表
//链表头是没有数据域的，只有指针域
//也就是说链表头不存储数据只有一个指向下一个结点的指针
struct Node* creatList() //创建链表
{
    struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));//动态内存分配
    //动态内存分配后    headNode 就成为了结构体变量
    //变量使用前必须初始化
    //headNode->data = 1;
    headNode->next = NULL;
    return headNode;
}

//为什么要封装一个创建结点的功能？
//在插入结点时需要用到
struct Node* creatNode(int data) //创建结点
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;//结构体变量初始化   结构体变量里的data给的是形参
    newNode->next = NULL;//结构体变量里面的指针初始化为空
    return newNode;

}

//打印链表
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

//插入结点：参数：插入哪个链表，插入结点的数据是多少 
//这里是表头法插入也就是头插法

void insertNodeBrHead(struct Node* headNode,int data)
{
    //1. 创建插入的结点
    struct Node* newNode = creatNode(data);
    //2. 开始插入结点   先链接在断开
    newNode->next = headNode->next;
    headNode->next = newNode;
}

//链表的删除：指定位置删除 
void deleteNodeByAppoin(struct Node* headNode, int posData)
{
    struct Node* posNode = headNode->next;
    struct Node* posNodeFront = headNode;
    if (posNode == NULL)
        printf("无法删除链表为空！\n");
    else
    {
        while (posNode->data != posData)
        {
            posNodeFront = posNode;
            posNode = posNodeFront->next;
            if (posNode == NULL)
            {
                printf("未找到相关信息无法删除！\n");
                return;
            }

        }
        posNodeFront->next = posNode->next;
        free(posNode);
    }
}

int main()
{
    struct Node* list = creatList();//这里也就是我创建了一个叫list的链表

    insertNodeBrHead(list, 1);
    insertNodeBrHead(list, 2);
    insertNodeBrHead(list, 3);

    printList(list);//打印出来结果是321
    deleteNodeByAppoin(list, 2);//删除了2
    printList(list);//结果是31
    system("pause");

    return 0;
}