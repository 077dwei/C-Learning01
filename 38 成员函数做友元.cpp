#include<iostream>
using namespace std;

class Building38;
class goodGay38 {
public:
	goodGay38();

	void visit3801(); //visit函数可以访问Building38的私有成员
	void visit3802();//不可以访问Building38的私有成员

	Building38* building38;
};

class Building38 {
	//告诉编译器 goodGay38类下的visit3801成员函数作为本类的好朋友，可以访问私有成员
	friend void goodGay38::visit3801();

public:
	Building38();

public:

	string m_SittingRoom;//客厅

private:

	string m_bedRoom;//卧室
};

//类外实现成员函数
Building38::Building38() {
	m_SittingRoom = "客厅";
	m_bedRoom = "卧室";

}
goodGay38::goodGay38() {
	building38 = new Building38;
}

void goodGay38::visit3801() {
	cout << "visit3801 正在访问：" << building38->m_SittingRoom << endl;
	cout << "visit3801 正在访问：" << building38->m_bedRoom << endl;

}
void goodGay38::visit3802() {
	cout << "visit3802 正在访问：" << building38->m_SittingRoom << endl;
	//cout << "visit3802 正在访问：" << building38->m_bedRoom << endl;//错误，不能访问

}
void test3801() {
	goodGay38 gg;
	gg.visit3801();
	gg.visit3802();
}

int main() {

	test3801();

	system("pause");
	return 0;
}
