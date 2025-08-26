#include <iostream>
using namespace std;
int main08() {
	// 给变量分配合理的内存空间,不浪费
	// short 2 Byte
	// int 4 Byte
	// long :windows 4 Byte
	// long long  8 Byte

	// 整型
	//1、短整型 (-32768 ~ 32767)
	short num1 = 10;

	//2、 整型 常用
	int num2 = 10;
	//3、 长整型
	long num3 = 10;
	//4、长长整型
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	return 0;
}