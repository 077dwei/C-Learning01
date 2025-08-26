#include<iostream>
using namespace std;

//静态成员变量
class Person30 {
public:
	//特点：
	//1、所有对象共享同一份数据
	//2、编译阶段分配内存
	//3、类内声明，类外初始化(必须，否则无法访问)
	static int m_A;//静态成员变量

	//静态成员变量也是有访问权限的
private: //私有的类外不能访问
	static int m_B;
};
int Person30::m_A = 100;//类外初始化静态成员变量，是Person30下面的静态成员变量
int Person30::m_B = 200;//类外初始化静态成员变量，是Person30下面的静态成员变量
void test3001() {
	Person30 p;
	cout << p.m_A << endl;

	Person30 p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test3002() {
	//静态成员变量 不属于对象，所有对象共享同一份数据
	//静态成员变量可以通过对象访问，也可以通过类名访问
	
	//1.通过对象访问
	Person30 p;/*
	cout << p.m_A << endl;*/
	//2.通过类名访问
	cout << Person30::m_A << endl;

	//cout << Person30::m_B << endl; //类外不能访问私有的静态成员变量
}



int main30() {
	//test3001();
	test3002();
	system("pause");
	return 0;
}
