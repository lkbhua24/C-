#include<iostream>
#include<cstdlib>  // ����������system���������ͷ�ļ�
using namespace std;

/*
* 
int main()
{
	cout << "hello world" << endl;

	// �����������﷨���������� ������ = ������ʼֵ 
	int a = 10;
	cout << "a=" << a << endl;
	 
	system("pause");

	return 0;
}

*/


/*

// �����Ķ��巽ʽ
// 1.#define�곣��
// 2��const���εı���

// 1��#define�곣��
#define DAY 7  // �������������Ǿ��Բ���ı�Ĺ�ʶ
int main()
{
	// DAY = 14;   ����Day�ǳ�����һ���޸ľͻᱨ��
	cout << "һ���ܹ���:" << DAY << "��" << endl;

	// 2��const���εı���
	const int month = 12;
	// month = 24; ����const���εı���Ҳ��֮Ϊ���������ɸ���

	cout << "һ���ж��ٸ���" << month << "���·�" << endl;
	system("pause");

	return 0;
}

*/


/*
// sizeof�ؼ������������͵Ĵ�С
int main()
{
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ" << sizeof(short) << endl;

	int num2 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ" << sizeof(int) << endl;

	long num3 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ" << sizeof(long) << endl;

	long long num4  = 10;
	cout << "shortռ���ڴ�ռ�Ϊ" << sizeof(long long) << endl;

	float f1 = 3.1415826f; // �������f������������Ϊ����double���͵ı�����
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;
	// �����ǵ����Ȼ���˫�������ݣ�������ֻ����ʾ6λ����
	// float 4���ֽ�
	// double 8���ֽ�

	// ��ѧ��������ʾС��
	float f2 = 3e2;  // 3*10^2
	cout << "f2-" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;


	system("pause");

	return 0;
}

*/



/*
int main()
{
	
	// 1���ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << ch << endl;
	// 2���ַ��ͱ�����ռ���ڴ��С
	cout << "�ַ��ͱ�����ռ���ڴ�ռ��СΪ��" << sizeof(ch) << endl;
	// 3���ַ��ͱ�����������
	// char ch ="b"; Ҫ�õ�����
	// char ch = 'abced' Ҫ��˫����
	
	// 4���ַ��ͱ�����Ӧ��ASCII����
	cout << (int)ch << endl;
	system("pause");

	return 0;
}


*/

/*

// ���ݵ�����
int main()
{
	// 1������
	int a = 0;
	cout << "������α���a��ֵ��" << endl;
	cin >> a;
	cout << "���α���a=" << a << endl;

	// 2��������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "���α���a=" << a << endl;

	// 3���ַ���


	// 4���ַ�������


	// 5����������

	system("pasue");

	return 0;
}



*/


/*
// ǰ��++�ͺ���++������
int main()
{
	// ǰ��++ �����ñ���+1��Ȼ����б��ʽ����
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1=" << a1 << endl;   // 11
	cout << "b1=" << b1 << endl;   // 110


	
	// ����++�� �Ƚ��Ա��ʽ���㣬���ñ���+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2=" << a2 << endl;   // 11
	cout << "b2=" << b2 << endl;   // 100


	system("pause");

	return 0;
}


*/