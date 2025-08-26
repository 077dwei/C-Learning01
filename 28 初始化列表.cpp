#include<iostream>
using namespace std;
//初始化列表


class Person28 {
public:

	//传统初始化操作
	/*Person28(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//初始化列表初始化属性
	Person28(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	}


	int m_A;
	int m_B;
	int m_C;
};

void test2801() {
	//Person28 p(10, 20, 30);

	Person28 p(30,20,10);//初始化列表
	cout << "M_A = " << p.m_A << endl;
	cout << "M_B = " << p.m_B << endl;
	cout << "M_C = " << p.m_C << endl;
}

int main28() {
	test2801();

	system("pause");
	return 0;
}