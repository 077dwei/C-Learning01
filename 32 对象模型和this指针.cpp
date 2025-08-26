#include<iostream>
using namespace std;
//成员变量 和 成员函数 分开存储的
class Person32 {
	int m_A; ;// 只有！非静态成员变量 属于类的对象上

	static int m_B; // 静态成员变量 不属于类的对象上

	void func() {} // 非静态成员函数 不属于类的对象上

	static void func2() {} // 静态成员函数 不属于类的对象上
};
int Person32::m_B = 0; // 静态成员变量初始化

void test3201() {
	Person32 p;

	cout << "size of p = " << sizeof(p) << endl; //空对象占用的内存大小是1个字节
	//因为空对象的大小不能为0，所以编译器会分配1个字节的内存空间来存放这个对象
	//这个字节的内存空间是用来区分不同对象的
	//如果没有这个字节，编译器就无法区分不同对象了（对于空对象不能区分）

}
void test3202() {
	Person32 p;

	cout << "size of p = " << sizeof(p) << endl;
}

int main32() {

	//test3201();
	test3202(); //4个字节

	system("pause");
	return 0;
}
