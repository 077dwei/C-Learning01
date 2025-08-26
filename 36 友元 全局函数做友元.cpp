#include<iostream>
using namespace std;
#include<string>
//友元
//全局函数做友元

//建筑物类
class Building {
	//goodGay 全局函数是 Building好朋友，可以访问 Building 私有成员
	friend void goodGay(Building* building); //声明全局函数为友元

public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室

};

//全局函数
void goodGay(Building *building) {
	cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;

}
void test3601() {
	Building building;
	goodGay(&building);
}

int main36() {
	test3601();

	system("pause");
	return 0;
}
