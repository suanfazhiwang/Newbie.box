#define _CRT_SECURE_NO_WARNINGS 1
//关于函数声明，符号生命，头文件包含


//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//符号的定义（主要是结构体）

struct UserNode* Userlist = NULL;//创建一个全局的用户链表，空



//这里是用户的信息用一个结构体记录用户的各种信息（普通用户）
struct UserInfo
{
	char UserId[20];//用户id
	long long phone;//手机号
	int password;//登陆密码
};




//有表头链表(用户)
struct UserNode
{
	struct UserInfo data;//数据域
	struct UserNode* next;//指针域
};



//创建用户信息表头
struct UserNode* UsercreateHead()
{
	//动态内存申请
	struct UserNode* headNode = (struct UserNode*)malloc(sizeof(struct UserNode));
	//变量的基本规则---使用前必须初始化
	headNode->next = NULL;
	return headNode;
};

//创建结点：为插入做准备
//把用户的数据变为结构体变量
struct UserNode* UsercreatNode(struct UserInfo data)
{
	struct UserNode* newNode = (struct UserNode*)malloc(sizeof(struct UserNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//打印   用户信息
void UserprintList(struct UserNode* headNode)
{
	struct UserNode* pMove = headNode->next;
	printf("用户id\t手机号\t密码\n");
	while (pMove != NULL)
	{
		//剥洋葱
		printf("%s\t%lld\t%d\n", pMove->data.UserId, pMove->data.phone, pMove->data.password);
		pMove = pMove->next;
	}
}

//插入：表头插入
void UserinsertNodeByHead(struct UserNode* headNode, struct UserInfo data)
{
	struct UserNode* newNode = UsercreatNode(data);
	//必须先链接后断开
	newNode->next = headNode->next;
	headNode->next = newNode;

}

//删除    传入的   这里后面应该在传入一个数据  根据什么删除就传入什么数据
void UserdeleteNodeByName(struct UserNode* headNode, char* uesrid)
{
	struct UserNode* posLeftNode = headNode;
	struct UserNode* posNode = headNode->next;
	//书籍名字是字符串，字符串比较函数
	while (posNode != NULL && strcmp(posNode->data.UserId, uesrid))
	{
		posLeftNode = posNode;
		posNode = posLeftNode->next;
	}
	//讨论查找的结果  
	if (posNode == NULL)
	{
		return;
	}
	else
	{
		printf("删除成功！\n");
		posLeftNode->next = posNode->next;
		free(posNode);
		posNode = NULL;
	}
}

//id查找按照用户   也是应该传入一个数据  比如传入id查找用户    返回的类型指针
struct UserNode* UsersearchByName(struct UserNode* headNode, char* uesrid)
{
	struct UserNode* posNode = headNode->next;

	while (posNode != NULL && strcmp(posNode->data.UserId, uesrid))
	{
		posNode = posNode->next;


	}
	return posNode;
}

//文件操作
//文件写操作
void UsersaveInfoToFile(const char* fileName, struct UserNode* headNode)
{
	FILE* fp = fopen(fileName, "w");
	struct UserNode* pMove = headNode->next;
	while (pMove != NULL)
	{
		fprintf(fp, "%s\t%lld\t%d\n", pMove->data.UserId, pMove->data.phone,pMove->data.password);

		pMove = pMove->next;
	}
	fclose(fp);
}

//文件读操作
void UserreadInfoFormFile(const char* fileName, struct UserNode* headNode)
{

	//如果不存在就创建文件   建议是txt文件
	//User.txt
	FILE* fp = fopen(fileName, "r");
	if (fp == NULL)//第一次打开时候文件肯定是不存在的
	{
		//不存在就创建出来这个文件
		fp = fopen(fileName, "w+");
	}
	struct UserInfo tempData;
	while (fscanf(fp, "%s\t%lld\t%d\n", tempData.UserId, &tempData.phone,&tempData.password) != EOF)
	{
		UserinsertNodeByHead(Userlist, tempData);
	}

	fclose(fp);

}





struct BookNode* Booklist = NULL;//创建一个全局的书籍链表，空

//这里是书籍的信息用一个结构体记录书籍的各种信息
struct BookInfo
{
	char BookName[20];//书名
	float price;//价格
	int num;//数量
};


//有表头链表(书籍)
struct BookNode
{
	struct BookInfo data;//数据域
	struct BookNode* next;//指针域
};

//创建表头：表头就是一个结构体变量
struct BookNode* BookcreateHead()
{
	//动态内存申请
	struct BookNode* headNode = (struct BookNode*)malloc(sizeof(struct BookNode));
	//变量的基本规则---使用前必须初始化
	headNode->next = NULL;
	return headNode;
};


//创建结点：为插入做准备
//把用户的数据变为结构体变量
struct BookNode* BookcreatNode(struct BookInfo data)
{
	struct BookNode* newNode = (struct BookNode*)malloc(sizeof(struct BookNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//打印
void BookprintList(struct BookNode* headNode)
{
	struct BookNode* pMove = headNode->next;
	printf("书名\t价格\t数量\n");
	while (pMove != NULL)
	{
		//剥洋葱
		printf("%s\t%.1f\t%d\n", pMove->data.BookName, pMove->data.price, pMove->data.num);
		pMove = pMove->next;
	}
}



//插入：表头插入
void BookinsertNodeByHead(struct BookNode* headNode, struct BookInfo data)
{
	struct BookNode* newNode = BookcreatNode(data);
	//必须先链接后断开
	newNode->next = headNode->next;
	headNode->next = newNode;
}



//指定位置删除    
//根据书名进行删除
void BookdeleteNodeByName(struct BookNode* headNode, char* bookname)
{
	struct BookNode* posLeftNode = headNode;
	struct BookNode* posNode = headNode->next;
	//书籍名字是字符串，字符串比较函数
	while (posNode != NULL && strcmp(posNode->data.BookName, bookname))
	{
		posLeftNode = posNode;
		posNode = posLeftNode->next;


	}
	//讨论查找的结果  
	if (posNode == NULL)
	{
		return;
	}
	else
	{
		printf("删除成功！\n");
		posLeftNode->next = posNode->next;
		free(posNode);
		posNode = NULL;
	}
}

//书籍查找按照书名
struct BookNode* BooksearchByName(struct BookNode* headNode, char* bookname)
{
	struct BookNode* posNode = headNode->next;
	while (posNode != NULL && strcmp(posNode->data.BookName, bookname))
	{
		posNode = posNode->next;
	}
	return posNode;
}



//文件写操作
void BooksaveInfoToFile(const char* fileName, struct BookNode* headNode)
{
	FILE* fp = fopen(fileName, "w");
	struct BookNode* pMove = headNode->next;
	while (pMove != NULL)
	{
		fprintf(fp, "%s\t%.1f\t%d\n", pMove->data.BookName, pMove->data.price, pMove->data.num);

		pMove = pMove->next;
	}
	fclose(fp);
}
//文件读操作
void BookreadInfoFormFile(const char* fileName, struct BookNode* headNode)
{
	FILE* fp = fopen(fileName, "r");
	if (fp == NULL)//第一次打开时候文件肯定是不存在的
	{
		//不存在就创建出来这个文件
		fp = fopen(fileName, "w+");
	}
	struct BookInfo tempData;
	while (fscanf(fp, "%s\t%f\t%d\n", tempData.BookName, &tempData.price, &tempData.num) != EOF)
	{
		BookinsertNodeByHead(Booklist, tempData);
	}

	fclose(fp);
}

//冒泡排序
void BookbubbleSortList(struct BookNode* headNode)
{
	for (struct BookNode* p = headNode->next; p != NULL; p = p->next)
	{
		for (struct BookNode* q = headNode->next; q->next != NULL; q = q->next)
		{
			if (q->data.price > q->next->data.price)
			{
				struct BookInfo temData = q->data;
				q->data = q->next->data;
				q->next->data = temData;

			}
		}
	}
	BookprintList(headNode);
}