#include<iostream>
using namespace std;
//左移运算符重载

class Person {
	friend ostream& operator<<(ostream& out, Person p);
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
private:

	//利用成员函数重载 左移运算符 p.operator<<(cout); 简化版本 p << cout; 错误
	//不会利用成员函数重载左移运算符，因为左移运算符是全局函数，无法实现cout在左侧
	//void operator<<( Person &p) {

	//}

	int m_A;
	int m_B;

};

//只能利用全局函数重载左移运算符
//cout 是ostream类的一个对象，左移运算符是ostream类的成员函数
ostream& operator<<(ostream & out, Person p) { //本质 operator<<(cout，p) 简化 cout << p;
	out << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return out;
	//可以用out是因为out是一个引用，cout是一个全局对象，out可以指向cout
	//out是个别名
}

void test01() {
	Person p(10,10);
	cout << p << endl << "Hello world" << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}
