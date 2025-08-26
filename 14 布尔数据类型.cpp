#include <iostream>
using namespace std;
int main14() {
	// true 1，false 2
	//1、创建bool数据类型
	bool flag = true; // 代表真的意思
	cout << flag << endl;

	flag = false; // 表示假
	cout << flag << endl;

	// 本质上 1 代表的是真， 0 代表假
	//2、查看bool类型所占内存空间
	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;
	return 0;
}