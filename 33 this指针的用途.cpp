#include<iostream>
using namespace std;
class Person33 {
public:
	Person33(int age) {
		// this指针指向的是被调用的成员函数 所属的对象
		this->age = age;
	}
	Person33& PersonAddAge(Person33& p) {
		this->age += p.age;
		// this指向p2的指针，而*this指向p2对象本身
		return *this; //返回对象本身
	}
	int age;

};

//1，解决名称冲突
void test3301() {
	Person33 p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

// 2，返回对象本身用*this
void test3302() {
	Person33 p1(10);

	Person33 p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1); //调用成员函数
	cout << "p2的年龄为：" << p2.age << endl;
}

int main33() {
	//test3301();
	test3302();

	system("pause");
	return 0;
}
