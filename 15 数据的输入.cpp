#include<iostream>
using namespace std;
int main15() {
	// 关键字 cin
	// 1、整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a = " << a << endl;

	//2、浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量的值f= " << f << endl;

	//3、字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值" << endl;
	cin >> ch;
	cout << "字符型变量ch = " << ch << endl;

	//4、字符串型
	string str = "hello";
	cout << "请给字符串str赋值" << endl;
	cin >> str;
	cout << "字符串str = " << str << endl;

	//5、布尔类型
	bool flag = false;
	cout << "请给布尔类型 flag 赋值" << endl;
	cin >> flag; // 布尔类型只要是非零的值都代表真
	cout << "布尔类型flag = " << flag << endl;

	return 0;
}