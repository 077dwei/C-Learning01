#include<iostream>
using namespace std;

//继承中构造和析构顺序

class Base {
public:
	Base() {
		cout << "Base构造函数！" << endl;
	}

	~Base() {
		cout << "Base析构函数！" << endl;
	}
};

class Son : public Base {
public:
	Son() {
		cout << "Son构造函数！" << endl;
	}

	~Son() {
		cout << "Son析构函数！" << endl;
	}
};
void test01() {
	//Base b;

	Son s;
	// Son s; 输出结果：
		//Base构造函数！
		//Son构造函数！
		//Son析构函数！
		//Base析构函数！
}

int main() {

	test01();

	system("pause");
	return 0;
}