#include<iostream>
using namespace std;

//继承中的同名静态成员处理方式
class Base {
public:

	static int m_A;

	static void func() {
		cout << "Base - static void func()" << endl;
	}

	static void func(int a) {
		cout << "Base - static void func(int a)" << endl;
	}
};

int Base::m_A = 100;

class Son : public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200;

//同名静态成员属性
void test01() {
	//1、通过对象访问数据
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m = " << s.Base::m_A << endl;

	//2、通过类名访问数据
	cout << "通过类名访问：" << endl;
	cout << "Son 下 m_A = " << Son::m_A << endl;
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;

}

//同名静态成员函数
void test02() {
	//1、通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	s.func();
	s.Base::func();

	//2、通过类名访问
	cout << "通过类名访问：" << endl;
	Son::func();
	Son::Base::func();

	//Son::func(100); 调不到，子类继承父类，父类中所有同名函数会被隐藏
	//如果想访问父类中被隐藏同名成员，需要加作用域
	Son::Base::func(100); // OK

}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}