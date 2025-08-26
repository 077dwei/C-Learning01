#include<iostream>
using namespace std;
//构造函数的调用规则
//1、创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造 (空实现)
//析构函数 (空实现)
//拷贝构造 (值拷贝)

//2、
// 如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
// 如果我们写了拷贝构造函数，编译器就不在提供其他普通构造函数
class Person {
public:
	/*Person() {
		cout << "Person 的默认构造函数调用" << endl;
	}*/
	/*Person(int age) {
		m_Age = age;
		cout << "Person 的有参构造函数调用" << endl;
	}*/
	Person(const Person& p) {
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}


	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;

};

//void test2601() {
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "P2的年龄为：" << p2.m_Age << endl;
//}

void test2602() {
	//Person p;//不写默认构造函数会报错

	//Person p(28);//当前：自己提供了拷贝构造函数，编译器就不会提供其他普通构造函数
	//Person p2(p); //自己不写拷贝构造函数，编译器会默认写拷贝构造函数
	//cout << "p2的年龄为：" << p2.m_Age << endl;
}



int main26() {
	//test2601();
	test2602();

system("pause");
return 0;
}