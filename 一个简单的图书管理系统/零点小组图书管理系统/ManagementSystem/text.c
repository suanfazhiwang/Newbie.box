#define _CRT_SECURE_NO_WARNINGS 1


#include"System.h"


int keydown;//全局变量存储键入值
void ManageLoginkeyDown();
void ManageMenu();
void FirstmakeMenu();
void FirstkeyDown();
void UserMenu();
void UserLoginkeyDown();

//注册界面   
void EnrollmakeMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                         用户注册                        ║ ┃\n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *         账号：                                          *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *         密码：                                          *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                          0.返回         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\t请您输入任意键回车进行输入\n");
}

//注册交互   应该调用用户链表函数注册  写入       只需要用户注册不需要管理员注册
void EnrollkeyDown()//再再
{
	struct UserInfo tempUser;//产生一个临时的变量存储书籍信息
	struct UserNode* result = NULL;

	printf("请输入用户id，密码，手机号\n");
	printf("密码必须为八位以内的数字\n");

	scanf("%s%d%lld", tempUser.UserId, &tempUser.password,&tempUser.phone);
	result = UsersearchByName(Userlist, tempUser.UserId);
	if (result == NULL)
	{
		UserinsertNodeByHead(Userlist, tempUser);
		UsersaveInfoToFile("userinfo.txt", Userlist);
		printf("注册成功\n");
		printf("返回上一级\n");
		FirstmakeMenu();
		FirstkeyDown();
	}
	else
	{
		printf("用户名重复，注册失败\n");
	}
	

}




//管理员管理用户界面
void ManageusermakeMenu()   //华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                       用户管理                          ║ ┃ \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         1.添加用户        *         2.查看用户          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *                     3.删除用户*                             ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                          0.返回         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	/*printf("\t请您输入任意键回车进行输入\n");
	printf("\t输入 0 回车即可返回\n");*/
}


//管理员管理用户交互      对用户的增删改查   需要进行文件操作    添加  查看  删除  排序 
void ManageuserkeyDown()   //再再
{
	int userkey = 0;
	struct UserInfo tempUser;//产生一个临时的变量存储信息
	struct UserNode* result = NULL;
	
	while (1)
	{
		printf("\t请您输入任意键回车进行输入\n");
		printf("\t输入 0 回车即可返回\n");
		scanf("%d", &userkey);


		switch (userkey)
		{

		case 0:
			printf("【 返回 】\n");
			printf("退出成功\n");
			//管理员界面
			ManageMenu();


			//管理员交互
			ManageLoginkeyDown();

			break;
		case 1:
			printf("【 添加用户 】\n");
			printf("输入用户id，手机号，密码：\n");
			printf("密码必须为八位以内的数字\n");

			scanf("%s%lld%d", tempUser.UserId, &tempUser.phone,&tempUser.password);

			result = UsersearchByName(Userlist, tempUser.UserId);

			if (result == NULL)
			{
				UserinsertNodeByHead(Userlist, tempUser);
				UsersaveInfoToFile("userinfo.txt", Userlist);
				printf("添加成功\n");
			}
			else
			{
				printf("用户名重复，添加失败\n");
			}


			break;
		case 2:
			printf("【 查看用户 】\n");
			UserprintList(Userlist);
			break;
		case 3:
			printf("【 删除用户 】\n");
			printf("请输入删除id：\n");
			scanf("%s", tempUser.UserId);
			UserdeleteNodeByName(Userlist, tempUser.UserId);
			UsersaveInfoToFile("userinfo.txt", Userlist);
		default:
			printf("输入错误请重新输入！\n");
			ManageuserkeyDown();
		}
	}

}

//管理员管理图书界面
void ManagebookmakeMenu()   //华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                       图书管理                          ║ ┃\n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         1.添加图书        *         2.查看图书          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         3.删除图书        *         4.排序图书          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         5.借阅图书        *         6.归还图书          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                          0.返回         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
//	printf("\t请您输入任意键回车进行输入\n");
//	printf("\t输入 0 回车即可返回\n");
}


//管理员管理图书交互     对图书的增删改查   需要进行文件操作     添加 查看 删除 排序  借阅  归还
void ManagebookkeyDown()    //明哥
{
	int userkey = 0;
	struct BookInfo tempBook;//产生一个临时的变量存储书籍信息
	struct BookNode* result = NULL;
	while (1)
	{
		printf("\t请您输入任意键回车进行输入\n");
		printf("\t输入 0 回车即可返回\n");
		scanf("%d", &userkey);
		switch (userkey)
		{
		case 0:
			printf("【 返回 】\n");
			printf("退出成功\n");
			//管理员界面
			ManageMenu();


			//管理员交互
			ManageLoginkeyDown();
		

			break;

		case 1:
			printf("【 添加图书 】\n");
			printf("输入书籍的信息(书名，价格，数量)：\n");
			scanf("%s%f%d", tempBook.BookName, &tempBook.price, &tempBook.num);
			BookinsertNodeByHead(Booklist, tempBook);
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 2:
			printf("【 查看图书 】\n");
			BookprintList(Booklist);
			break;
		case 3:
			printf("【 删除图书 】\n");
			printf("请输入删除书名：\n");
			scanf("%s", tempBook.BookName);
			BookdeleteNodeByName(Booklist, tempBook.BookName);
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 4:
			printf("【 排序图书 】\n");
			BookbubbleSortList(Booklist);
			break;
		case 5:
			printf("【 借阅图书 】\n");//书籍存在可以借阅，书籍总数量减一  不存在借阅失败
			printf("请输入借阅的书名：\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("没有相关书籍，无法借阅！\n");
			}
			else if (result->data.BookName > 0)
			{
				result->data.num--;
				printf("借阅成功！\n");
			}
			else
			{
				printf("当前书籍无库存,借阅失败\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;

		case 6:
			printf("【 归还图书 】\n");
			printf("请输入归还的书名：\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("书籍来源非法！\n");
			}
			else
			{
				result->data.num++;
				printf("归还成功！\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);


			break;
		default:
			printf("输入错误请重新输入！\n");
			ManagebookkeyDown();
		}
	}

}

//管理员界面
void ManageMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                        管理员                           ║ ┃ \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *         1.图书信息管理                                  *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *         2.用户信息管理                                  *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                          0.返回         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\t请您输入任意键回车进行输入\n");
	printf("\t输入 0 回车即可返回\n");
}

//管理员登陆后   选择进进入图书管理还是用户管理   
void ManageLoginkeyDown()//华华
{
	int key = 0;
	scanf("%d", &key);
	switch (key)
	{
	case 0:
		printf("【 返回 】\n");
		printf("返回成功\n");
		FirstmakeMenu();
		FirstkeyDown();
		break;
	case 1:
		//管理员管理图书界面
		ManagebookmakeMenu();
		//管理员管理图书交互    对图书的增删改查
		ManagebookkeyDown();
		break;
	case 2:
		//管理员管理用户界面
		ManageusermakeMenu();
		//管理员管理用户交互      对用户的增删改查
		ManageuserkeyDown();
	default:
		printf("输入错误请重新输入！\n");
		ManageLoginkeyDown();
	}
}


//用户登陆后   对书籍  浏览   查找   借阅   归还
void UserLoginkeyDown()     //明哥
{ 
	int userkey = 0;
	struct BookInfo tempBook;//产生一个临时的变量存储书籍信息
	struct BookNode* result = NULL;
	while (1)
	{

		printf("\t请您输入任意键回车进行输入\n");
		scanf("%d", &userkey);
		switch (userkey)
		{
		case 0:
			printf("【 返回 】\n");
			printf("返回成功\n");
			FirstmakeMenu();
			FirstkeyDown();
			break;

		case 1:
			printf("【 浏览图书 】\n");
			BookprintList(Booklist);
			break;

		case 2:
			printf("【 查找图书 】\n");
			printf("请输入查找书名\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("未找到书籍信息\n");
			}
			else
			{
				printf("书名\t价格\t数量\n");
				printf("%s\t%.1f\t%d\n", result->data.BookName, result->data.price, result->data.num);
			}
			break;

		case 3:
			printf("【 借阅图书 】\n");//书籍存在可以借阅，书籍总数量减一  不存在借阅失败
			printf("请输入借阅的书名：\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("没有相关书籍，无法借阅！\n");
			}
			else if (result->data.BookName > 0)
			{
				result->data.num--;
				printf("借阅成功！\n");
			}
			else
			{
				printf("当前书籍无库存,借阅失败\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);
			break;
		case 4:
			printf("【 归还图书 】\n");
			printf("请输入归还的书名：\n");
			scanf("%s", tempBook.BookName);
			result = BooksearchByName(Booklist, tempBook.BookName);
			if (result == NULL)
			{
				printf("书籍来源非法！\n");
			}
			else
			{
				result->data.num++;
				printf("归还成功！\n");
			}
			BooksaveInfoToFile("bookinfo.txt", Booklist);


			break;
		default:
			printf("输入错误请重新输入！\n");
			UserLoginkeyDown();


		}

	}

}

//用户界面
void UserMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                         用户                            ║ ┃  \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         1.浏览图书        *         2.查找图书          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ *         3.借阅图书        *         4.归还图书          *  ┃\n");
	printf("\t┃ *                           *                             *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                            0.返回       *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
//	printf("\t请您输入任意键回车进行输入\n");
}






//登录交互
void LoginmakeMenu()// 再再
{
	char AdminAccount[20] = "admin";	//管理员账号
	int password = 123456;		//管理员密码


	int key = 0;
	char UserAdminAccount[20];
	int Userpassword;
	struct UserNode* result = NULL;
	printf("按1进入用户登录系统；按2进入管理员登陆系统\n");

	scanf("%d", &key);
	switch (key)
	{
	case 1:
		printf("请输入你的账号:\n");
		scanf("%s", UserAdminAccount);
		result = UsersearchByName(Userlist, UserAdminAccount);
		if (result == NULL)
		{
			printf("未找到人员信息\n");
		}

		else
		{
			printf("请输入密码\n");
			scanf("%d", &Userpassword);
			if(result->data.password == Userpassword)
			{
				printf("登录成功\n");
				//用户界面
				UserMenu();
				//用户交互
				UserLoginkeyDown();
			}
			else
			{
				printf("密码错误\n");
				printf("请重新输入密码\n");
				printf("如果再次输入错误将返回主页面\n");
				scanf("%d", &Userpassword);
				if (result->data.password == Userpassword)
				{
					printf("登录成功\n");
					//用户界面
					UserMenu();
					//用户交互
					UserLoginkeyDown();
				}
				else
				{
					printf("输入错误\n");
					printf("返回主页面\n");
					FirstmakeMenu();
					FirstkeyDown();
				}
			}
		}
		break;
	case 2:
		printf("请输入你的账号:\n");
		scanf("%s", UserAdminAccount);
		if (strcmp(UserAdminAccount, AdminAccount))
		{
			printf("未找到人员信息\n");
		}
		else
		{
			printf("请输入密码\n");
			scanf("%d", &Userpassword);
			if (Userpassword == password)
			{
				printf("登录成功\n");

				//管理员界面
				ManageMenu();

				//管理员交互
				ManageLoginkeyDown();
			}
			else
			{
				printf("密码错误\n");
				printf("请重新输入密码\n");
				printf("如果再次输入错误将返回主页面\n");
				scanf("%d", &Userpassword);
				if (Userpassword == password)
				{
					printf("登录成功\n");

					//管理员界面
					ManageMenu();

					//管理员交互
					ManageLoginkeyDown();
				}
				else
				{
					printf("输入错误\n");
					printf("返回主页面\n");
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
		printf("输入错误请重新输入！\n");
		LoginmakeMenu();
		break;

	}
}


//登陆界面
void UserLoginmakeMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                        登录                             ║ ┃ \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                   按1进入用户登录                       *  ┃\n");
	printf("\t┃ *                   按2进入管理员登录                     *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *           账号：                                        *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *           密码：                                        *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *                                          0.返回         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\t请您输入任意键回车进行输入\n");
	printf("\t输入 0 回车即可返回\n");


}


//忘记密码界面
void LosemakeMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                        找回密码                         ║ ┃ \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *           账号：                                        *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *           手机号：                                        *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ *           密码：                                        *  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃ *                                                         *  ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\t请您输入任意键回车进行输入\n");

}

//忘记密码交互   用户输入对id和手机号就打印出密码
void LosekeyDown()//再再
{
	int usekey = 0;
	struct UserNode* result = NULL;

	int iphone = 0;
	char Userid[20];//用户姓名
	printf("请输入用户名\n");
	scanf("%s", Userid);
	result = UsersearchByName(Userlist, Userid);
	if (result == NULL)
	{
		printf("未找到人员信息\n");
	}
	else
	{

		printf("请输入您的手机号：\n");
		scanf("%d", &iphone);
		if (result->data.phone == iphone)
			printf("%d", result->data.password);
		else
		{
			printf("手机号错误\n");
		}
	}
	printf("返回登录\n");
	FirstmakeMenu();
	FirstkeyDown();
}

//第一个界面
void FirstmakeMenu()//华华
{
	printf("\n\n");
	printf("\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║              欢迎使用零点小组的图书管理系统             ║ ┃  \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                     1.登录                              ║ ┃  \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                     2.注册                              ║ ┃  \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┃  ╔═════════════════════════════════════════════════════════╗ ┃\n");
	printf("\t┃  ║                     3.忘记密码                          ║ ┃  \n");
	printf("\t┃  ╚═════════════════════════════════════════════════════════╝ ┃\n");
	printf("\t┃ ***********************************************************  ┃\n");
	printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

}


//选择登陆还是注册的交互   应该有选择语句switch
void FirstkeyDown()// 华华
{

	int key = 0;
	keydown = key;
	printf("请选择\n");
	scanf("%d", &key);
	switch (key)
	{
	case 1:
		//登陆界面
		UserLoginmakeMenu();
		//登录交互
		LoginmakeMenu();
		break;
	case 2:

		//注册界面
		EnrollmakeMenu();
		//注册交互
		EnrollkeyDown();
		break;
	case 3:
		//忘记密码界面
		LosemakeMenu();
		//忘记密码交互
		LosekeyDown();
		break;
	case 0:
		break;
	default:
		printf("输入错误请重新输入！\n");
	}

}




int main()
{
	//加载
	char AdminAccount[20] = "admin";	//管理员账号
	int password[20] = {123456};		//管理员密码

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
