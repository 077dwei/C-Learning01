#include<iostream>
using namespace std;
//深拷贝与浅拷贝

class Person27 {
public:
	Person27() {
		cout << "Person的默认构造函数调用" << endl;
	}
	Person27(int age, int height) {
		m_Age = age;
		m_Height = new int(height);//手动开辟，手动释放

		cout << "Person的有参构造函数调用" << endl;
	}
	//自己实现拷贝构造函数  解决浅拷贝带来的问题
	Person27(const Person27& p) {
		cout << "Person 拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认实现就是这行代码
		//深拷贝操作
		m_Height = new int(*p.m_Height); //开辟新的堆区拷贝
	}

	~Person27() {
		//将堆区开辟数据做释放操作  拷贝的副本和被拷贝的内存各走各的被释放
		if(m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构构造函数调用" << endl;
	}

	int m_Age;//年龄
	int* m_Height;//身高

};

void test2701() {
	Person27 p271(18, 160);
	cout << "p1的年龄为：" << p271.m_Age << "身高为：" << *p271.m_Height << endl;
	Person27 p272(p271);
	cout << "p2的年龄为：" << p272.m_Age << "身高为：" << *p272.m_Height << endl; //编译器做了浅拷贝操作
}


int main27() {
	test2701();

	system("pause");
	return 0;
}