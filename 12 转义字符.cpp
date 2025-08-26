#include <iostream>
using namespace std;
int main12() {
	// 转义字符
	// 换行符 \n
	cout << "hello world\n";

	// 反斜杠 
	cout << "\\" << endl;

	// 水平制表符 \t ，作用：整齐的输出
	cout << "aaaa\thelloworld" << endl; // \t占了8个字符，和前面的字符共用
	cout << "aa\thelloworld" << endl;
	cout << "aaaa\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl; // 可以变得整齐

	return 0;
}