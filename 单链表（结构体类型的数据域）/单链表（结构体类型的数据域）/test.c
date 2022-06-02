#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//这里演示在实际工程中链表的数据域是一个结构体时怎样完成
//首先创建一个结构体
struct student
{
    char name[20];
    int math;
    int num;
};

struct Node
{
    struct student data;                  //数据域
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
struct Node* creatNode(struct student data) //创建结点
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//动态内存分配

    newNode->data = data;//结构体变量初始化   结构体变量里的data给的是形参
    newNode->next = NULL;//结构体变量里面的指针初始化为空
    return newNode;

}

//打印链表
void printList(struct Node* headNode)
{
    struct Node* pMove = headNode->next;//创建一个指针用来打印数据
    printf("name\tnum\tmath\n");
        while (pMove != NULL)//pMove == NULL时其实就是整个链表结束了
        {
            //在结构体打印的时候剥洋葱
            printf("%s\t%d\t%d\n", pMove->data.name, pMove->data.num, pMove->data.math);
            pMove = pMove->next;//打印一次pMove往后挪一个
        }
    printf("\n");
}

//插入结点：参数：插入哪个链表，插入结点的数据是多少 
//这里是表头法插入也就是头插法
void insertNodeByHead(struct Node* headNode, struct student data)
{
    //1. 创建插入的结点
    struct Node* newNode = creatNode(data);
    //2. 开始插入结点   先链接在断开
    newNode->next = headNode->next;
    headNode->next = newNode;
}

//链表的删除：指定位置删除 
//我们只需要找到posNode和posNodeFront就可以
//将posNodeFront->next变为posNode->next就完成删除

void deleteNodeByAppoinNum(struct Node* headNode, int num)
{
    struct Node* posNode = headNode->next;
    struct Node* posNodeFront = headNode;
    if (posNode == NULL)
        printf("无法删除链表为空！\n");
    else
    {
        while (posNode->data.num != num)//一步一步往下找
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
    struct student info;
    while (1)
    {
        printf("请输入学生的姓名 学号 数学成绩：\n");
        scanf("%s%d%d", info.name, &info.num, &info.math);//在这里可以看出结构体的第一个元素就是一个地址
        setbuf(stdin, NULL);//清空缓冲区

        insertNodeByHead(list, info);
        printf("是否继续？(Y/N)?\n");

        setbuf(stdin, NULL);//清空缓冲区
        int choice = getchar();
        if (choice == 'n' || choice == 'N')
        {
            break;
        }

    }
    printList(list);
    printf("请输入要删除的学生的学号：\n");
    scanf("%d", &info.num);

    deleteNodeByAppoinNum(list, info.num);


    printList(list);
    system("pause");

    return 0;
}