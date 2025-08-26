#include<iostream>
using namespace std;
//静态成员函数
//静态成员函数只能访问静态成员变量，不能访问非静态成员变量
//所有对象共享同一份函数
class Person {
public:
	//静态成员函数
	static void func() {
		m_a = 100; //可以访问静态成员变量 // 共享数据
		//m_b = 100; //错误，不能访问非静态成员变量 // 无法区分是哪个对象的非静态成员变量
		cout << "static boid func调用 " << endl;
	}

	static int m_a; //静态成员变量
	int m_b; //非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2() {
		cout << "static void func2调用" << endl;
	}
};
int Person::m_a = 0; //静态成员变量初始化

int main31() {
	//1，通过对象访问
	Person p;
	p.func(); //通过对象访问静态成员函数
	//2,通过类名访问
	Person::func(); //通过类名访问静态成员函数
	//Person::func2();//错误，类外访问不到私有的静态成员函数
	system("pause");
	return 0;
}