#include <iostream>
using namespace std;
int main11() {
	// 1、字符型变量创建方式
	char ch = 'a'; // 单引号里面只能放一个字符
	cout << "ch = " << ch << endl;

	//2、字符型变量所占内存大小
	cout << "char 占用的内存大小：" << sizeof(char) << endl;

	//3、字符型常见错误
	//char ch2 = "b"; 错误，不能用双引号创建字符型变量
	//char ch2 = 'abcdef'; 创建字符型变量时，单引号内只能存一个字符


	//4、字符型变量对应 ASCII 编码
	// 强制转换来查看 ASCII 编码
	cout << (int)ch << endl; // 结果 97 ，意思是 a 在底层存的是 97 ，ch = a;
	// 常见的ASCII
	//a - 97
	//A - 65


	return 0;
}