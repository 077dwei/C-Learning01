#include<iostream>
#include<string> //用c++风格字符串的时候，要包含的头文件
using namespace std;
int main13() {
	// c语言风格字符串   char 变量名[] = "字符串值";
	// 注意事项： char 字符串名[] ，叫中括号
	// 注意事项2：等号后面要用双引号，包含起来字符串
	char str1[] = "hello world";
	cout << "c 风格 str1 = " << str1 << endl;

	// c++风格字符串   string 变量名[] = "字符串值";
	// 包含一个头文件 #include<string> 现在可以不用了
	string str2 = "hello world";
	cout << "c++ 风格 str2 = " << str2 << endl;

	return 0;
}