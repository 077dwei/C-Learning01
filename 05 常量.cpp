#include <iostream>
using namespace std;
//1. #define 宏常量
//2. const 修饰的变量
// 
//1.const 修饰的变量
#define Day 7
int main05() {
	//Day = 14;// 错误， Day 是常量,一旦修改就会报错
	cout << "一周总共有：" << Day << "天" << endl;

	// 2. const 修饰的变量
	const int mouth = 12;
	//mouth = 24; // 错误,const 修饰的变量也成为常量
	cout << "一年总共有：" << mouth << "个月份" << endl;

	system("pause");
	return 0;
}