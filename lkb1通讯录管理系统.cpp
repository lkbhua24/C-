#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;
# define MAX 1000
// 设计联系人结构体
struct Person
{
	string m_name;  // 姓名
	int m_Sex;    // 性别 1、男，2、女
	int m_age;      // 年龄
	string m_phone; // 电话
	string m_addr;  // 地址

};

// 设计通信录结构体
struct Addressbooks
{
	// 通信录中保存的联系人数组
	struct Person personArray[MAX];

	// 通信录中当前记录联系人个数
	int m_Size=0;
};

// 1.添加联系人
void addPerson(Addressbooks*abs)
{
	// 判断通信录是否已满
	if (abs->m_Size == MAX)
	{
		cout << "通信录已满，无法添加！" << endl;
		return;
	}
	else
	{
		// 添加具体联系人

		string name; // 姓名
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;

		// 性别
		cout << "请输入性别:" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true)
		{
			// 如果输入的是1或者2可以退出循环，因为输入的是正确值
		    // 如果输入有误，重新输入。
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		

		// 年龄
		cout << "请输入年龄:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		// 电话
		cout << "请输入联系电话:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		// 住址
		cout << "请输入家庭住址:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_addr = address;

		// 更新通信录人数
		abs->m_Size++;
		cout << "添加成功！" << endl;
		
		// 清屏
		system("pause"); // 请按任意键继续
		system("cls");

	}
}



// 显示联系人
void showPerson(Addressbooks*abs)
{
	// 判断通信录中人数是否为0
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空,请添加联系人！" << endl;
		
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名:" << abs->personArray[i].m_name << "\t";
			cout << "性别:" << (abs->personArray[i].m_Sex==1?"男":"女") << "\t";
			cout << "年龄:" << abs->personArray[i].m_age << "\t";
			cout << "电话:" << abs->personArray[i].m_phone << "\t";
			cout << "址指:" << abs->personArray[i].m_addr << endl;
		}
	}

	system("pause");
	system("cls");
}



// 检测联系人是否存在，如果存在返回具体位置，否则返回-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;  // 返回这个人在数组中的下标编号
		}
	}
	return -1;
}


// 删除指定联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入你要删除的联系人的姓名:" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "找到指定联系人了！" << endl;
		for (int i = ret; i < abs->m_Size; i++)
		{
			// 数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "未找到该联系人！" << endl;
	}
	system("pause");
	system("cls");
}



// 查找联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入你要查找的联系人！" << endl;
	string name;
	cin >> name;

	// 判断查找的人是否在通信录中
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "姓名:" << abs->personArray[ret].m_name<<"\t";
		cout << "性别:" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄:" << abs->personArray[ret].m_age << "\t";
		cout << "电话:" << abs->personArray[ret].m_phone << "\t";
		cout << "地址:" << abs->personArray[ret].m_addr << endl;
	}
	else
	{
		cout << "并未查找到此联系人" << endl;
	}
	system("pause");
	system("cls");
}



// 修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入你要修改的联系人;" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		// 姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;

		// 性别
		cout << "请输入性别:" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		// 年龄
		cout << "请输入年龄:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;

		// 电话
		cout << "请输入联系人电话:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		// 住址
		cout << "请输入地址:" << endl;
		string add;
		cin >> add;
		abs->personArray[ret].m_addr = add;
		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "未找到此联系人！" << endl;
	}
	system("pause");
	system("cls");
}


// 清空联系人
void cleanPerson(Addressbooks* abs)
{
	int chocie = 0;
	cout << "你是否确定清空所有联系人(1为是，-1为否):" << endl;
	cin >> chocie;
	if (chocie == 1)
	{
		abs->m_Size = 0;
		cout << "通信录已为空！" << endl;
		system("pasue");
		system("cls");
	}
	else
	{
		cout << "已经返回上一步！" << endl;
		system("pasue");
		system("cls");
	}
}


// 菜单函数
void ShowMenu()
{
	cout << "   **********************" << endl;
	cout << "1、******添加联系人******" << endl;
	cout << "2、******显示联系人******" << endl;
	cout << "3、******删除联系人******" << endl;
	cout << "4、******查找联系人******" << endl;
	cout << "5、******修改联系人******" << endl;
	cout << "6、******清空联系人******" << endl;
	cout << "0、******退出通信录******" << endl;
	cout << "   **********************" << endl;
}

int main()
{
	// 创建通信录的结构体变量
	Addressbooks abs;

	// 初始化通信录中当前人员个数
	abs.m_Size = 0;

	int choice = 0; // 用户选择变量

	
	
	while (true)
	{	
		ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 1: // 添加联系人
			addPerson(&abs);  // 利用地址传递可以修饰实参
			break;

		case 2: // 显示联系人
			showPerson(&abs);
			break;

		case 3: // 删除联系人
		{
			deletePerson(&abs);
		}

		case 4: // 查找联系人
			findPerson(&abs);
			break;

		case 5: // 修改联系人
			modifyPerson(&abs);
			break;

		case 6: // 清空联系人
			cleanPerson(&abs);
			break;

		case 0: // 退出通信录
			cout << "欢迎下次使用通信录:" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	
}