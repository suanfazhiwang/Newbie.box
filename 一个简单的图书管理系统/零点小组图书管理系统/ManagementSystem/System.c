

//���ŵĶ��壨��Ҫ�ǽṹ�壩

struct BookNode* Booklist = NULL;//����һ��ȫ�ֵ��鼮������
struct UserNode* Userlist = NULL;//����һ��ȫ�ֵ��û�������

//�������鼮����Ϣ��һ���ṹ���¼�鼮�ĸ�����Ϣ
struct BookInfo
{
	char BookName[20];//����
	float price;//�۸�
	int num;//����
	int BookId;//��id
	char author[20];//��������
	char publishing[100];//����������
};

//�������û�����Ϣ��һ���ṹ���¼�鼮�ĸ�����Ϣ����������Ա����ͨ�û���
struct UserInfo
{
	int UserId[20];//�û�id
	char UserName[20];//�û�����
	int phone;//�û��ֻ���
	int password;//��½����
};

//�б�ͷ����(�鼮)
struct BookNode
{
	struct BookInfo data;//������
	struct BookNode* next;//ָ����
};

//�б�ͷ����(�û�)
struct UserNode
{
	struct UserInfo data;//������
	struct UserNode* next;//ָ����
};





