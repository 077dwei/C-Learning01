#include<iostream>
using namespace std;
//拷贝构造函数调用时机


class Person {
public:
	Person() {
		cout << "Person默认构造函数调用" << endl;
	}
	Person(int age) {
		cout << "Person有参构造函数调用" << endl;
		m_Age = age;
	}
	Person(const Person& p) {
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}


	~Person() {
		cout << "Person析构函数调用" << endl;
	}

	int m_Age;

};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test2501() {
	Person p1(20);
	Person p2(p1);

	cout << "P2的年龄：" << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值
//传入的值，值传递的方式本质也是拷贝数据，副本也是复制品
void doWork(Person p) {
	//在此处改值不会改变实参数据
}
void test2502() {
	Person p;
	doWork(p); //实参传递给形参的时候会调用拷贝构造函数
	cout << "test2502中的p值" << p.m_Age << endl;
}

//3、值方式返回局部对象
Person doWork2() { 
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
//现在编译器优化不会再调用拷贝构造函数了，直接将p1创建在p的位置
void test2503() {
	Person p = doWork2();
	cout << (int*)&p << endl;

}



int main25() {
	//test2501();
	//test2502();
	test2503();

	system("pause");
	return 0;
}