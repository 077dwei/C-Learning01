#include<iostream>
using namespace std;

//�̳��й��������˳��

class Base {
public:
	Base() {
		cout << "Base���캯����" << endl;
	}

	~Base() {
		cout << "Base����������" << endl;
	}
};

class Son : public Base {
public:
	Son() {
		cout << "Son���캯����" << endl;
	}

	~Son() {
		cout << "Son����������" << endl;
	}
};
void test01() {
	//Base b;

	Son s;
	// Son s; ��������
		//Base���캯����
		//Son���캯����
		//Son����������
		//Base����������
}

int main() {

	test01();

	system("pause");
	return 0;
}