#include<iostream>
using namespace std;
//类对象作为类成员

//手机类
class Phone29 {
public:
	
	Phone29(string pName) {
		cout << "Phone29的构造函数调用" << endl;
		m_PName = pName; // 修复：将分号移到正确的位置
	}
	~Phone29() {
		cout << "Phone29析构函数调用" << endl;
	}
	//手机品牌名称
	string m_PName;
};

//人类
class Person29 {
public:
	// Phone29 m_Phone = pName;(隐式)  ->  Phone29 m_Phone = Phone29(PName);(显式)
	Person29(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person29的构造函数调用" << endl;
	}

	~Person29() {
		cout << "Person29析构函数调用" << endl;
	}

	//姓名
	string m_Name;
	//手机
	Phone29 m_Phone;

};
//构造时:当其他类对象作为本类成员,构造时先构造类对象,再构造自身
//析构时:析构的顺序与构造相反

void test2901() {
	Person29 p("张三", "苹果MAX");
	cout << p.m_Name << "拿着: " << p.m_Phone.m_PName << endl;
}


int main29() {
	test2901();


	system("pause");
	return 0;
}