#define _CRT_SECURE_NO_WARNINGS 1


#include"System.h"


int keydown;//ȫ�ֱ����洢����ֵ
void ManageLoginkeyDown();
void ManageMenu();
void FirstmakeMenu();
void FirstkeyDown();
void UserMenu();
void UserLoginkeyDown();

//ע�����   
void EnrollmakeMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                         �û�ע��                        �U ��\n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *         �˺ţ�                                          *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *         ���룺                                          *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                          0.����         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��������������س���������\n");
}

//ע�ύ��   Ӧ�õ����û�������ע��  д��       ֻ��Ҫ�û�ע�᲻��Ҫ����Աע��
void EnrollkeyDown()//����
{
	struct UserInfo tempUser;//����һ����ʱ�ı����洢�鼮��Ϣ
	struct UserNode* result = NULL;

	printf("�������û�id�����룬�ֻ���\n");
	printf("�������Ϊ��λ���ڵ�����\n");

	scanf("%s%d%lld", tempUser.UserId, &tempUser.password,&tempUser.phone);
	result = UsersearchByName(Userlist, tempUser.UserId);
	if (result == NULL)
	{
		UserinsertNodeByHead(Userlist, tempUser);
		UsersaveInfoToFile("userinfo.txt", Userlist);
		printf("ע��ɹ�\n");
		printf("������һ��\n");
		FirstmakeMenu();
		FirstkeyDown();
	}
	else
	{
		printf("�û����ظ���ע��ʧ��\n");
	}
	

}




//����Ա�����û�����
void ManageusermakeMenu()   //����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                       �û�����                          �U �� \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         1.����û�        *         2.�鿴�û�          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *                     3.ɾ���û�*                             ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                          0.����         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	/*printf("\t��������������س���������\n");
	printf("\t���� 0 �س����ɷ���\n");*/
}


//����Ա�����û�����      ���û�����ɾ�Ĳ�   ��Ҫ�����ļ�����    ���  �鿴  ɾ��  ���� 
void ManageuserkeyDown()   //����
{
	int userkey = 0;
	struct UserInfo tempUser;//����һ����ʱ�ı����洢��Ϣ
	struct UserNode* result = NULL;
	
	while (1)
	{
		printf("\t��������������س���������\n");
		printf("\t���� 0 �س����ɷ���\n");
		scanf("%d", &userkey);


		switch (userkey)
		{

		case 0:
			printf("�� ���� ��\n");
			printf("�˳��ɹ�\n");
			//����Ա����
			ManageMenu();


			//����Ա����
			ManageLoginkeyDown();

			break;
		case 1:
			printf("�� ����û� ��\n");
			printf("�����û�id���ֻ��ţ����룺\n");
			printf("�������Ϊ��λ���ڵ�����\n");

			scanf("%s%lld%d", tempUser.UserId, &tempUser.phone,&tempUser.password);

			result = UsersearchByName(Userlist, tempUser.UserId);

			if (result == NULL)
			{
				UserinsertNodeByHead(Userlist, tempUser);
				UsersaveInfoToFile("userinfo.txt", Userlist);
				printf("��ӳɹ�\n");
			}
			else
			{
				printf("�û����ظ������ʧ��\n");
			}


			break;
		case 2:
			printf("�� �鿴�û� ��\n");
			UserprintList(Userlist);
			break;
		case 3:
			printf("�� ɾ���û� ��\n");
			printf("������ɾ��id��\n");
			scanf("%s", tempUser.UserId);
			UserdeleteNodeByName(Userlist, tempUser.UserId);
			UsersaveInfoToFile("userinfo.txt", Userlist);
		default:
			printf("����������������룡\n");
			ManageuserkeyDown();
		}
	}

}

//����Ա����ͼ�����
void ManagebookmakeMenu()   //����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                       ͼ�����                          �U ��\n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         1.���ͼ��        *         2.�鿴ͼ��          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         3.ɾ��ͼ��        *         4.����ͼ��          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         5.����ͼ��        *         6.�黹ͼ��          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                          0.����         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
//	printf("\t��������������س���������\n");
//	printf("\t���� 0 �س����ɷ���\n");
}


//����Ա����ͼ�齻��     ��ͼ�����ɾ�Ĳ�   ��Ҫ�����ļ�����     ��� �鿴 ɾ�� ����  ����  �黹
void ManagebookkeyDown()    //����
{
	int userkey = 0;
	struct BookInfo tempBook;//����һ����ʱ�ı����洢�鼮��Ϣ
	struct BookNode* result = NULL;
	while (1)
	{
		printf("\t��������������س���������\n");
		printf("\t���� 0 �س����ɷ���\n");
		scanf("%d", &userkey);
		switch (userkey)
		{
		case 0:
			printf("�� ���� ��\n");
			printf("�˳��ɹ�\n");
			//����Ա����
			ManageMenu();


			//����Ա����
			ManageLoginkeyDown();
		

			break;

		case 1:
			printf("�� ���ͼ�� ��\n");
			printf("�����鼮����Ϣ(�������۸�����)��\n");
			scanf("%s%f%d", tempBook.BookName, &tempBook.price, &tempBook.num);
			BookinsertNodeByHead(Booklist, tempBook);
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 2:
			printf("�� �鿴ͼ�� ��\n");
			BookprintList(Booklist);
			break;
		case 3:
			printf("�� ɾ��ͼ�� ��\n");
			printf("������ɾ��������\n");
			scanf("%s", tempBook.BookName);
			BookdeleteNodeByName(Booklist, tempBook.BookName);
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 4:
			printf("�� ����ͼ�� ��\n");
			BookbubbleSortList(Booklist);
			break;
		case 5:
			printf("�� ����ͼ�� ��\n");//�鼮���ڿ��Խ��ģ��鼮��������һ  �����ڽ���ʧ��
			printf("��������ĵ�������\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("û������鼮���޷����ģ�\n");
			}
			else if (result->data.BookName > 0)
			{
				result->data.num--;
				printf("���ĳɹ���\n");
			}
			else
			{
				printf("��ǰ�鼮�޿��,����ʧ��\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;

		case 6:
			printf("�� �黹ͼ�� ��\n");
			printf("������黹��������\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("�鼮��Դ�Ƿ���\n");
			}
			else
			{
				result->data.num++;
				printf("�黹�ɹ���\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);


			break;
		default:
			printf("����������������룡\n");
			ManagebookkeyDown();
		}
	}

}

//����Ա����
void ManageMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                        ����Ա                           �U �� \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *         1.ͼ����Ϣ����                                  *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *         2.�û���Ϣ����                                  *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                          0.����         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��������������س���������\n");
	printf("\t���� 0 �س����ɷ���\n");
}

//����Ա��½��   ѡ�������ͼ��������û�����   
void ManageLoginkeyDown()//����
{
	int key = 0;
	scanf("%d", &key);
	switch (key)
	{
	case 0:
		printf("�� ���� ��\n");
		printf("���سɹ�\n");
		FirstmakeMenu();
		FirstkeyDown();
		break;
	case 1:
		//����Ա����ͼ�����
		ManagebookmakeMenu();
		//����Ա����ͼ�齻��    ��ͼ�����ɾ�Ĳ�
		ManagebookkeyDown();
		break;
	case 2:
		//����Ա�����û�����
		ManageusermakeMenu();
		//����Ա�����û�����      ���û�����ɾ�Ĳ�
		ManageuserkeyDown();
	default:
		printf("����������������룡\n");
		ManageLoginkeyDown();
	}
}


//�û���½��   ���鼮  ���   ����   ����   �黹
void UserLoginkeyDown()     //����
{ 
	int userkey = 0;
	struct BookInfo tempBook;//����һ����ʱ�ı����洢�鼮��Ϣ
	struct BookNode* result = NULL;
	while (1)
	{

		printf("\t��������������س���������\n");
		scanf("%d", &userkey);
		switch (userkey)
		{
		case 0:
			printf("�� ���� ��\n");
			printf("���سɹ�\n");
			FirstmakeMenu();
			FirstkeyDown();
			break;

		case 1:
			printf("�� ���ͼ�� ��\n");
			BookprintList(Booklist);
			break;

		case 2:
			printf("�� ����ͼ�� ��\n");
			printf("�������������\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("δ�ҵ��鼮��Ϣ\n");
			}
			else
			{
				printf("����\t�۸�\t����\n");
				printf("%s\t%.1f\t%d\n", result->data.BookName, result->data.price, result->data.num);
			}
			break;

		case 3:
			printf("�� ����ͼ�� ��\n");//�鼮���ڿ��Խ��ģ��鼮��������һ  �����ڽ���ʧ��
			printf("��������ĵ�������\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("û������鼮���޷����ģ�\n");
			}
			else if (result->data.BookName > 0)
			{
				result->data.num--;
				printf("���ĳɹ���\n");
			}
			else
			{
				printf("��ǰ�鼮�޿��,����ʧ��\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 4:
			printf("�� �黹ͼ�� ��\n");
			printf("������黹��������\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("�鼮��Դ�Ƿ���\n");
			}
			else
			{
				result->data.num++;
				printf("�黹�ɹ���\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);


			break;
		default:
			printf("����������������룡\n");
			UserLoginkeyDown();


		}

	}

}

//�û�����
void UserMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                         �û�                            �U ��  \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         1.���ͼ��        *         2.����ͼ��          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� *         3.����ͼ��        *         4.�黹ͼ��          *  ��\n");
	printf("\t�� *                           *                             *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                            0.����       *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
//	printf("\t��������������س���������\n");
}






//��¼����
void LoginmakeMenu()// ����
{
	char AdminAccount[20] = "admin";	//����Ա�˺�
	int password = 123456;		//����Ա����


	int key = 0;
	char UserAdminAccount[20];
	int Userpassword;
	struct UserNode* result = NULL;
	printf("��1�����û���¼ϵͳ����2�������Ա��½ϵͳ\n");

	scanf("%d", &key);
	switch (key)
	{
	case 1:
		printf("����������˺�:\n");
		scanf("%s", UserAdminAccount);
		result = UsersearchByName(Userlist, UserAdminAccount);
		if (result == NULL)
		{
			printf("δ�ҵ���Ա��Ϣ\n");
		}

		else
		{
			printf("����������\n");
			scanf("%d", &Userpassword);
			if(result->data.password == Userpassword)
			{
				printf("��¼�ɹ�\n");
				//�û�����
				UserMenu();
				//�û�����
				UserLoginkeyDown();
			}
			else
			{
				printf("�������\n");
				printf("��������������\n");
				printf("����ٴ�������󽫷�����ҳ��\n");
				scanf("%d", &Userpassword);
				if (result->data.password == Userpassword)
				{
					printf("��¼�ɹ�\n");
					//�û�����
					UserMenu();
					//�û�����
					UserLoginkeyDown();
				}
				else
				{
					printf("�������\n");
					printf("������ҳ��\n");
					FirstmakeMenu();
					FirstkeyDown();
				}
			}
		}
		break;
	case 2:
		printf("����������˺�:\n");
		scanf("%s", UserAdminAccount);
		if (strcmp(UserAdminAccount, AdminAccount))
		{
			printf("δ�ҵ���Ա��Ϣ\n");
		}
		else
		{
			printf("����������\n");
			scanf("%d", &Userpassword);
			if (Userpassword == password)
			{
				printf("��¼�ɹ�\n");

				//����Ա����
				ManageMenu();

				//����Ա����
				ManageLoginkeyDown();
			}
			else
			{
				printf("�������\n");
				printf("��������������\n");
				printf("����ٴ�������󽫷�����ҳ��\n");
				scanf("%d", &Userpassword);
				if (Userpassword == password)
				{
					printf("��¼�ɹ�\n");

					//����Ա����
					ManageMenu();

					//����Ա����
					ManageLoginkeyDown();
				}
				else
				{
					printf("�������\n");
					printf("������ҳ��\n");
					FirstmakeMenu();
					FirstkeyDown();
				}
			}
		}
		break;
	case 0: 
		FirstmakeMenu();
		FirstkeyDown();
		break;
	default:
		printf("����������������룡\n");
		LoginmakeMenu();
		break;

	}
}


//��½����
void UserLoginmakeMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                        ��¼                             �U �� \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                   ��1�����û���¼                       *  ��\n");
	printf("\t�� *                   ��2�������Ա��¼                     *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *           �˺ţ�                                        *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *           ���룺                                        *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *                                          0.����         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��������������س���������\n");
	printf("\t���� 0 �س����ɷ���\n");


}


//�����������
void LosemakeMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                        �һ�����                         �U �� \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *           �˺ţ�                                        *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *           �ֻ��ţ�                                        *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� *           ���룺                                        *  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t�� *                                                         *  ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��������������س���������\n");

}

//�������뽻��   �û������id���ֻ��žʹ�ӡ������
void LosekeyDown()//����
{
	int usekey = 0;
	struct UserNode* result = NULL;

	int iphone = 0;
	char Userid[20];//�û�����
	printf("�������û���\n");
	scanf("%s", Userid);
	result = UsersearchByName(Userlist, Userid);
	if (result == NULL)
	{
		printf("δ�ҵ���Ա��Ϣ\n");
	}
	else
	{

		printf("�����������ֻ��ţ�\n");
		scanf("%d", &iphone);
		if (result->data.phone == iphone)
			printf("%d", result->data.password);
		else
		{
			printf("�ֻ��Ŵ���\n");
		}
	}
	printf("���ص�¼\n");
	FirstmakeMenu();
	FirstkeyDown();
}

//��һ������
void FirstmakeMenu()//����
{
	printf("\n\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U              ��ӭʹ�����С���ͼ�����ϵͳ             �U ��  \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                     1.��¼                              �U ��  \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                     2.ע��                              �U ��  \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��  �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[ ��\n");
	printf("\t��  �U                     3.��������                          �U ��  \n");
	printf("\t��  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ��\n");
	printf("\t�� ***********************************************************  ��\n");
	printf("\t��������������������������������������������������������������������������������������������������������������������������������\n");

}


//ѡ���½����ע��Ľ���   Ӧ����ѡ�����switch
void FirstkeyDown()// ����
{

	int key = 0;
	keydown = key;
	printf("��ѡ��\n");
	scanf("%d", &key);
	switch (key)
	{
	case 1:
		//��½����
		UserLoginmakeMenu();
		//��¼����
		LoginmakeMenu();
		break;
	case 2:

		//ע�����
		EnrollmakeMenu();
		//ע�ύ��
		EnrollkeyDown();
		break;
	case 3:
		//�����������
		LosemakeMenu();
		//�������뽻��
		LosekeyDown();
		break;
	case 0:
		break;
	default:
		printf("����������������룡\n");
	}

}




int main()
{
	//����
	char AdminAccount[20] = "admin";	//����Ա�˺�
	int password[20] = {123456};		//����Ա����

	Booklist = BookcreateHead();
	BookreadInfoFormFile("bookinfo.txt", Booklist);
	Userlist = UsercreateHead();
	UserreadInfoFormFile("userinfo.txt", Userlist);

	while (1)
	{
		FirstmakeMenu();
		FirstkeyDown();
		system("pause");
		system("cls");
	}
	

	return 0;
}
