#include<iostream>
using namespace std;
class Person33 {
public:
	Person33(int age) {
		// thisָ��ָ����Ǳ����õĳ�Ա���� �����Ķ���
		this->age = age;
	}
	Person33& PersonAddAge(Person33& p) {
		this->age += p.age;
		// thisָ��p2��ָ�룬��*thisָ��p2������
		return *this; //���ض�����
	}
	int age;

};

//1��������Ƴ�ͻ
void test3301() {
	Person33 p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

// 2�����ض�������*this
void test3302() {
	Person33 p1(10);

	Person33 p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1); //���ó�Ա����
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main33() {
	//test3301();
	test3302();

	system("pause");
	return 0;
}
