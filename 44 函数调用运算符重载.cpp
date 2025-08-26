#include<iostream>
using namespace std;
//函数调用运算符重载  ()

//打印输出类
class MyPrint {
public:

	//重载函数调用运算符
	void operator()(const string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;

}

void test01() {
	MyPrint myPrint;

	myPrint("hello world");  //由于使用起来非常类似于函数调用，因此成为仿函数

	MyPrint02("hello world");
}

//仿函数非常的灵活，没有一个固定的写法
//加法类
class MyAdd{
public:
	
	int operator()(const int num1, const int num2) {
		return num1 + num2;
	}
};

void test02() {
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << "匿名函数对象 MyAdd()(100, 100): " << MyAdd()(100, 100) << endl; //这个匿名对象用完后立刻被释放

}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}