#include<iostream>
using namespace std;
//类做友元

class Building37;//前置声明，防止报错
class goodGay37 {
public:

	goodGay37();
	void visit(); //参观函数 访问Building中的属性

	Building37* building37;

};

class Building37 {
	//goodGay37类是本类的好朋友，可以访问本类中的私有成员
	friend class goodGay37;
public:
	Building37();//构造函数
public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室

};

goodGay37::goodGay37() {
	//创建建筑物对象
	building37 = new Building37;
}

//类外写成员函数
Building37::Building37() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}

void goodGay37::visit() {
	cout << "好基友类正在访问：" << building37->m_SittingRoom << endl;
	cout << "好基友类正在访问：" << building37->m_BedRoom << endl;

}

void test3701() {
	goodGay37 gg;
	gg.visit();
}

int main() {
	test3701();

	system("pause");
	return 0;
}
