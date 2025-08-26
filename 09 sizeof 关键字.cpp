#include <iostream>
using namespace std;
int main09() {
	// 可以用 sizeof 求数据类型占用的内存的大小
	// 语法: sizeof(数据类型 or 变量)
	short num1 = 10;
	cout << "short 占用内存空间为: " << sizeof(short) << endl;
	cout << "被short定义num1占用内存空间为：" << sizeof(num1) << endl; // num1 已经被定义为short类型了

	int num2 = 10;
	cout << "int占用内存空间为: " << sizeof(int) << endl;

	long num3 = 10;
	cout << "long 占用内存空间为: " << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long 占用内存空间为: " << sizeof(long long) << endl;

	// 整型大小比较
	// short < int <=  long  <=  long long 

	return 0;
}