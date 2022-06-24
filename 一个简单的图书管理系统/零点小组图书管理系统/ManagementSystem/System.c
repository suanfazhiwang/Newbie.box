

//符号的定义（主要是结构体）

struct BookNode* Booklist = NULL;//创建一个全局的书籍链表，空
struct UserNode* Userlist = NULL;//创建一个全局的用户链表，空

//这里是书籍的信息用一个结构体记录书籍的各种信息
struct BookInfo
{
	char BookName[20];//书名
	float price;//价格
	int num;//数量
	int BookId;//书id
	char author[20];//作者姓名
	char publishing[100];//出版社名字
};

//这里是用户的信息用一个结构体记录书籍的各种信息（包括管理员和普通用户）
struct UserInfo
{
	int UserId[20];//用户id
	char UserName[20];//用户姓名
	int phone;//用户手机号
	int password;//登陆密码
};

//有表头链表(书籍)
struct BookNode
{
	struct BookInfo data;//数据域
	struct BookNode* next;//指针域
};

//有表头链表(用户)
struct UserNode
{
	struct UserInfo data;//数据域
	struct UserNode* next;//指针域
};





