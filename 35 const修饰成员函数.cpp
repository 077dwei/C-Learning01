#include<iostream>
using namespace std;
//常函数
class Person35 {
public:
	//this指针的本质 是指针常量 指针的指向是不可以修改的
	//Person * const this //指针不能改
	//const Person * const this //指针和对象都不能改
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const { 
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;// this指针不可以修改指针的指向

	}

	void func() {
		m_A = 100; //可以修改成员变量
	}

	int m_A = 0;
	mutable int m_B = 0;//特殊变量，即使在常函数中，也可以修改，加上关键字mutable
};

void test3501() {
	Person35 p;
	p.showPerson(); //调用常函数
	cout << "m_B = " << p.m_B << endl;
}

//常对象
void test3502() {
	const Person35 p; //常对象
	//p.m_A = 100; //错误，常对象的成员变量不能修改
	p.m_B = 100; //正确，mutable修饰的成员变量可以修改，即使在常对象中也可以修改
	//常对象只能调用常函数
	p.showPerson();
	//p.func(); //错误，常对象不能调用非常函数，以为普通成员函数可以修改属性

}

int main35() {
	test3501();
	system("pause");
	return 0;
}
