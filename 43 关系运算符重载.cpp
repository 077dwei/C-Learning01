#include<iostream>
using namespace std;

//关系运算符重载
class Person {
public:
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	Person() {
		cout << "Person的默认构造函数调用" << endl;
	}

	//重载 == 号

	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}

	//重载 != 号
	bool operator!=(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;

};

void test01() {
	Person p1("Tom", 18);
	cout << "p1 name: " << p1.m_Name << endl << "p1 age: " << p1.m_Age << endl;
	Person p2("Jerry", 18);
	cout << "p2 name: " << p2.m_Name << endl << "p2 age: " << p2.m_Age << endl;

	//test p3
	Person p3; //调用默认构造函数
	cout << "input p3 compare with p2" << endl;
	cout << "input p3 age: " << endl;
	cin >> p3.m_Age;
	cout << "input p3 name: " << endl;
	cin >> p3.m_Name;

	cout << "p3 age: " << p3.m_Age << endl << "p3 name: " << p3.m_Name << endl;

	if (p1 == p2) {
		cout << "p1 和 p2 是相等的" << endl;
	}
	else {
		cout << "p1 和 p2 是不相等的" << endl;
	}

	if (p1 != p2) {
		cout << "p1 和 p2 是不相等的" << endl;
	}
	else {
		cout << "p1 和 p2 是相等的" << endl;
	}
	
	//test p3
	if (p2 == p3) {
				cout << "p2 和 p3 是相等的" << endl;
	}
	else {
		cout << "p2 和 p3 是不相等的" << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}