#include<iostream>
using namespace std;
//空指针调用成员函数
class Person34 {
public:
	void showClassName() {
		cout << "this is Person34 class" << endl;
	}

	void showPersonAge() {
		//防止崩溃
		if (this == NULL) {
			return;
		}
		//报错的原因：空指针调用成员函数，this指针为空，访问成员变量会导致错误
		cout << "age = " << this->m_Age << endl;
	}
	int m_Age;
};
void test3401() {
	Person34* p = NULL;
	p->showClassName();

	p->showPersonAge();
}

int main34() {
	test3401();

	system("pause");
	return 0;
}
