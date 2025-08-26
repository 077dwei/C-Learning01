#include<iostream>
using namespace std;
int main10() {

	//1、单精度 float  (7位有效数字)
	//2、双精度 double  (15-16位有效数字)
	// 默认情况下 输出一个小数，会显示出6位有效数字
	float f1 = 3.14f;
	// 不加 f ，编译器会默认为双精度类型，加了 f 才是单精度类型
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;


	// 自己试
	float num1 = 10.0f;
	double num2 = 10; //int
	cout << "num1(float)为:" << num1 << endl;


	// 内存占用空间大小
	cout << "float 占用内存大小：" << sizeof(float) << endl; // 4
	cout << "double 占用内存大小：" << sizeof(double) << endl; // 8

	// 科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2; 如果e后面是正数
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; // 3 * 0.1 ^2; 如果e后面是负数
	cout << "f3 = " << f3 << endl;

	return 0;
}