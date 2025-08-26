#include<iostream>
using namespace std;

// 递增运算符重载

//自定义整形
class MyInteger {
	// 加 const 修饰 MyInteger& 可以满足左值和右值的需求
	friend ostream& operator<<(ostream& cout, const MyInteger& myint);
public:
	MyInteger() {
		m_Num = 0;
	}

	//重载前置++运算符
	//返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++() {
		//先进行++运算
		m_Num++;

		//再将自身做返回
		return *this;
	}

	//重载后置++运算符(返回值)  int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int) {
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录的结果返回
		return temp;
	}

private:
	int m_Num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, const MyInteger& myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << "test01" << endl;
	//测试
	int i = 0; //局部变量 i
	//++i 与 = i++ 的区别在于前者先递增再使用，后者先使用再递增
	cout << "++i 时 = " << ++i << endl; // 输出 1，i 变为 1
	cout << "++i 后 i = " << i++ << endl; // 输出 1，i 变为 2
	cout << "i++ 后 i  = " << i << endl; // 输出 2
	//begin test MyInteger
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << "test02" << endl;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}