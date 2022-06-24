#define _CRT_SECURE_NO_WARNINGS 1
//���ں�������������������ͷ�ļ�����


//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//���ŵĶ��壨��Ҫ�ǽṹ�壩

struct UserNode* Userlist = NULL;//����һ��ȫ�ֵ��û�������



//�������û�����Ϣ��һ���ṹ���¼�û��ĸ�����Ϣ����ͨ�û���
struct UserInfo
{
	char UserId[20];//�û�id
	long long phone;//�ֻ���
	int password;//��½����
};




//�б�ͷ����(�û�)
struct UserNode
{
	struct UserInfo data;//������
	struct UserNode* next;//ָ����
};



//�����û���Ϣ��ͷ
struct UserNode* UsercreateHead()
{
	//��̬�ڴ�����
	struct UserNode* headNode = (struct UserNode*)malloc(sizeof(struct UserNode));
	//�����Ļ�������---ʹ��ǰ�����ʼ��
	headNode->next = NULL;
	return headNode;
};

//������㣺Ϊ������׼��
//���û������ݱ�Ϊ�ṹ�����
struct UserNode* UsercreatNode(struct UserInfo data)
{
	struct UserNode* newNode = (struct UserNode*)malloc(sizeof(struct UserNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//��ӡ   �û���Ϣ
void UserprintList(struct UserNode* headNode)
{
	struct UserNode* pMove = headNode->next;
	printf("�û�id\t�ֻ���\t����\n");
	while (pMove != NULL)
	{
		//�����
		printf("%s\t%lld\t%d\n", pMove->data.UserId, pMove->data.phone, pMove->data.password);
		pMove = pMove->next;
	}
}

//���룺��ͷ����
void UserinsertNodeByHead(struct UserNode* headNode, struct UserInfo data)
{
	struct UserNode* newNode = UsercreatNode(data);
	//���������Ӻ�Ͽ�
	newNode->next = headNode->next;
	headNode->next = newNode;

}

//ɾ��    �����   �������Ӧ���ڴ���һ������  ����ʲôɾ���ʹ���ʲô����
void UserdeleteNodeByName(struct UserNode* headNode, char* uesrid)
{
	struct UserNode* posLeftNode = headNode;
	struct UserNode* posNode = headNode->next;
	//�鼮�������ַ������ַ����ȽϺ���
	while (posNode != NULL && strcmp(posNode->data.UserId, uesrid))
	{
		posLeftNode = posNode;
		posNode = posLeftNode->next;
	}
	//���۲��ҵĽ��  
	if (posNode == NULL)
	{
		return;
	}
	else
	{
		printf("ɾ���ɹ���\n");
		posLeftNode->next = posNode->next;
		free(posNode);
		posNode = NULL;
	}
}

//id���Ұ����û�   Ҳ��Ӧ�ô���һ������  ���紫��id�����û�    ���ص�����ָ��
struct UserNode* UsersearchByName(struct UserNode* headNode, char* uesrid)
{
	struct UserNode* posNode = headNode->next;

	while (posNode != NULL && strcmp(posNode->data.UserId, uesrid))
	{
		posNode = posNode->next;


	}
	return posNode;
}

//�ļ�����
//�ļ�д����
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

//�ļ�������
void UserreadInfoFormFile(const char* fileName, struct UserNode* headNode)
{

	//��������ھʹ����ļ�   ������txt�ļ�
	//User.txt
	FILE* fp = fopen(fileName, "r");
	if (fp == NULL)//��һ�δ�ʱ���ļ��϶��ǲ����ڵ�
	{
		//�����ھʹ�����������ļ�
		fp = fopen(fileName, "w+");
	}
	struct UserInfo tempData;
	while (fscanf(fp, "%s\t%lld\t%d\n", tempData.UserId, &tempData.phone,&tempData.password) != EOF)
	{
		UserinsertNodeByHead(Userlist, tempData);
	}

	fclose(fp);

}





struct BookNode* Booklist = NULL;//����һ��ȫ�ֵ��鼮������

//�������鼮����Ϣ��һ���ṹ���¼�鼮�ĸ�����Ϣ
struct BookInfo
{
	char BookName[20];//����
	float price;//�۸�
	int num;//����
};


//�б�ͷ����(�鼮)
struct BookNode
{
	struct BookInfo data;//������
	struct BookNode* next;//ָ����
};

//������ͷ����ͷ����һ���ṹ�����
struct BookNode* BookcreateHead()
{
	//��̬�ڴ�����
	struct BookNode* headNode = (struct BookNode*)malloc(sizeof(struct BookNode));
	//�����Ļ�������---ʹ��ǰ�����ʼ��
	headNode->next = NULL;
	return headNode;
};


//������㣺Ϊ������׼��
//���û������ݱ�Ϊ�ṹ�����
struct BookNode* BookcreatNode(struct BookInfo data)
{
	struct BookNode* newNode = (struct BookNode*)malloc(sizeof(struct BookNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//��ӡ
void BookprintList(struct BookNode* headNode)
{
	struct BookNode* pMove = headNode->next;
	printf("����\t�۸�\t����\n");
	while (pMove != NULL)
	{
		//�����
		printf("%s\t%.1f\t%d\n", pMove->data.BookName, pMove->data.price, pMove->data.num);
		pMove = pMove->next;
	}
}



//���룺��ͷ����
void BookinsertNodeByHead(struct BookNode* headNode, struct BookInfo data)
{
	struct BookNode* newNode = BookcreatNode(data);
	//���������Ӻ�Ͽ�
	newNode->next = headNode->next;
	headNode->next = newNode;
}



//ָ��λ��ɾ��    
//������������ɾ��
void BookdeleteNodeByName(struct BookNode* headNode, char* bookname)
{
	struct BookNode* posLeftNode = headNode;
	struct BookNode* posNode = headNode->next;
	//�鼮�������ַ������ַ����ȽϺ���
	while (posNode != NULL && strcmp(posNode->data.BookName, bookname))
	{
		posLeftNode = posNode;
		posNode = posLeftNode->next;


	}
	//���۲��ҵĽ��  
	if (posNode == NULL)
	{
		return;
	}
	else
	{
		printf("ɾ���ɹ���\n");
		posLeftNode->next = posNode->next;
		free(posNode);
		posNode = NULL;
	}
}

//�鼮���Ұ�������
struct BookNode* BooksearchByName(struct BookNode* headNode, char* bookname)
{
	struct BookNode* posNode = headNode->next;
	while (posNode != NULL && strcmp(posNode->data.BookName, bookname))
	{
		posNode = posNode->next;
	}
	return posNode;
}



//�ļ�д����
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
//�ļ�������
void BookreadInfoFormFile(const char* fileName, struct BookNode* headNode)
{
	FILE* fp = fopen(fileName, "r");
	if (fp == NULL)//��һ�δ�ʱ���ļ��϶��ǲ����ڵ�
	{
		//�����ھʹ�����������ļ�
		fp = fopen(fileName, "w+");
	}
	struct BookInfo tempData;
	while (fscanf(fp, "%s\t%f\t%d\n", tempData.BookName, &tempData.price, &tempData.num) != EOF)
	{
		BookinsertNodeByHead(Booklist, tempData);
	}

	fclose(fp);
}

//ð������
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