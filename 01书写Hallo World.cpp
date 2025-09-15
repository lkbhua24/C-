#include<iostream>
#include<cstdlib>  // 新增：包含system函数所需的头文件
using namespace std;

/*
* 
int main()
{
	cout << "hello world" << endl;

	// 变量创建的语法：数据类型 变量名 = 变量初始值 
	int a = 10;
	cout << "a=" << a << endl;
	 
	system("pause");

	return 0;
}

*/


/*

// 常量的定义方式
// 1.#define宏常量
// 2、const修饰的变量

// 1、#define宏常量
#define DAY 7  // 像这种星期日是绝对不会改变的共识
int main()
{
	// DAY = 14;   错误：Day是常量，一旦修改就会报错
	cout << "一周总共有:" << DAY << "天" << endl;

	// 2、const修饰的变量
	const int month = 12;
	// month = 24; 错误：const修饰的变量也称之为常量，不可更改

	cout << "一年有多少个：" << month << "个月份" << endl;
	system("pause");

	return 0;
}

*/


/*
// sizeof关键字求数据类型的大小
int main()
{
	short num1 = 10;
	cout << "short占用内存空间为" << sizeof(short) << endl;

	int num2 = 10;
	cout << "short占用内存空间为" << sizeof(int) << endl;

	long num3 = 10;
	cout << "short占用内存空间为" << sizeof(long) << endl;

	long long num4  = 10;
	cout << "short占用内存空间为" << sizeof(long long) << endl;

	float f1 = 3.1415826f; // 如果不加f，编译器会认为这是double类型的变量。
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;
	// 无论是单精度还是双精度数据，编译器只会显示6位数。
	// float 4个字节
	// double 8个字节

	// 科学计数法表示小数
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
	
	// 1、字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;
	// 2、字符型变量所占的内存大小
	cout << "字符型变量所占的内存空间大小为：" << sizeof(ch) << endl;
	// 3、字符型变量常见错误
	// char ch ="b"; 要用单引号
	// char ch = 'abced' 要用双引号
	
	// 4、字符型变量对应的ASCII编码
	cout << (int)ch << endl;
	system("pause");

	return 0;
}


*/

/*

// 数据的输入
int main()
{
	// 1、整形
	int a = 0;
	cout << "请给整形变量a赋值：" << endl;
	cin >> a;
	cout << "整形变量a=" << a << endl;

	// 2、浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "整形变量a=" << a << endl;

	// 3、字符型


	// 4、字符串类型


	// 5、布尔类型

	system("pasue");

	return 0;
}



*/


/*
// 前置++和后置++的区别
int main()
{
	// 前置++ ：先让变量+1，然后进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1=" << a1 << endl;   // 11
	cout << "b1=" << b1 << endl;   // 110


	
	// 后置++： 先进性表达式运算，后让变量+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2=" << a2 << endl;   // 11
	cout << "b2=" << b2 << endl;   // 100


	system("pause");

	return 0;
}


*/