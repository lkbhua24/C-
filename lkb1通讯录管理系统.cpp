#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;
# define MAX 1000
// �����ϵ�˽ṹ��
struct Person
{
	string m_name;  // ����
	int m_Sex;    // �Ա� 1���У�2��Ů
	int m_age;      // ����
	string m_phone; // �绰
	string m_addr;  // ��ַ

};

// ���ͨ��¼�ṹ��
struct Addressbooks
{
	// ͨ��¼�б������ϵ������
	struct Person personArray[MAX];

	// ͨ��¼�е�ǰ��¼��ϵ�˸���
	int m_Size=0;
};

// 1.�����ϵ��
void addPerson(Addressbooks*abs)
{
	// �ж�ͨ��¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨ��¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		// ��Ӿ�����ϵ��

		string name; // ����
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;

		// �Ա�
		cout << "�������Ա�:" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			// ����������1����2�����˳�ѭ������Ϊ���������ȷֵ
		    // ������������������롣
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		

		// ����
		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		// �绰
		cout << "��������ϵ�绰:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		// סַ
		cout << "�������ͥסַ:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_addr = address;

		// ����ͨ��¼����
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;
		
		// ����
		system("pause"); // �밴���������
		system("cls");

	}
}



// ��ʾ��ϵ��
void showPerson(Addressbooks*abs)
{
	// �ж�ͨ��¼�������Ƿ�Ϊ0
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��,�������ϵ�ˣ�" << endl;
		
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����:" << abs->personArray[i].m_name << "\t";
			cout << "�Ա�:" << (abs->personArray[i].m_Sex==1?"��":"Ů") << "\t";
			cout << "����:" << abs->personArray[i].m_age << "\t";
			cout << "�绰:" << abs->personArray[i].m_phone << "\t";
			cout << "ַָ:" << abs->personArray[i].m_addr << endl;
		}
	}

	system("pause");
	system("cls");
}



// �����ϵ���Ƿ���ڣ�������ڷ��ؾ���λ�ã����򷵻�-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;  // ����������������е��±���
		}
	}
	return -1;
}


// ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�˵�����:" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "�ҵ�ָ����ϵ���ˣ�" << endl;
		for (int i = ret; i < abs->m_Size; i++)
		{
			// ����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�����ϵ�ˣ�" << endl;
	}
	system("pause");
	system("cls");
}



// ������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	// �жϲ��ҵ����Ƿ���ͨ��¼��
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "����:" << abs->personArray[ret].m_name<<"\t";
		cout << "�Ա�:" << abs->personArray[ret].m_Sex << "\t";
		cout << "����:" << abs->personArray[ret].m_age << "\t";
		cout << "�绰:" << abs->personArray[ret].m_phone << "\t";
		cout << "��ַ:" << abs->personArray[ret].m_addr << endl;
	}
	else
	{
		cout << "��δ���ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");
}



// �޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��;" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		// ����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;

		// �Ա�
		cout << "�������Ա�:" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		// ����
		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;

		// �绰
		cout << "��������ϵ�˵绰:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		// סַ
		cout << "�������ַ:" << endl;
		string add;
		cin >> add;
		abs->personArray[ret].m_addr = add;
		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�����ϵ�ˣ�" << endl;
	}
	system("pause");
	system("cls");
}


// �����ϵ��
void cleanPerson(Addressbooks* abs)
{
	int chocie = 0;
	cout << "���Ƿ�ȷ�����������ϵ��(1Ϊ�ǣ�-1Ϊ��):" << endl;
	cin >> chocie;
	if (chocie == 1)
	{
		abs->m_Size = 0;
		cout << "ͨ��¼��Ϊ�գ�" << endl;
		system("pasue");
		system("cls");
	}
	else
	{
		cout << "�Ѿ�������һ����" << endl;
		system("pasue");
		system("cls");
	}
}


// �˵�����
void ShowMenu()
{
	cout << "   **********************" << endl;
	cout << "1��******�����ϵ��******" << endl;
	cout << "2��******��ʾ��ϵ��******" << endl;
	cout << "3��******ɾ����ϵ��******" << endl;
	cout << "4��******������ϵ��******" << endl;
	cout << "5��******�޸���ϵ��******" << endl;
	cout << "6��******�����ϵ��******" << endl;
	cout << "0��******�˳�ͨ��¼******" << endl;
	cout << "   **********************" << endl;
}

int main()
{
	// ����ͨ��¼�Ľṹ�����
	Addressbooks abs;

	// ��ʼ��ͨ��¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int choice = 0; // �û�ѡ�����

	
	
	while (true)
	{	
		ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 1: // �����ϵ��
			addPerson(&abs);  // ���õ�ַ���ݿ�������ʵ��
			break;

		case 2: // ��ʾ��ϵ��
			showPerson(&abs);
			break;

		case 3: // ɾ����ϵ��
		{
			deletePerson(&abs);
		}

		case 4: // ������ϵ��
			findPerson(&abs);
			break;

		case 5: // �޸���ϵ��
			modifyPerson(&abs);
			break;

		case 6: // �����ϵ��
			cleanPerson(&abs);
			break;

		case 0: // �˳�ͨ��¼
			cout << "��ӭ�´�ʹ��ͨ��¼:" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	
}