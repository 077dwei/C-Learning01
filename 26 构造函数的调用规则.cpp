#include<iostream>
using namespace std;
//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ��� (��ʵ��)
//�������� (��ʵ��)
//�������� (ֵ����)

//2��
// �������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
// �������д�˿������캯�����������Ͳ����ṩ������ͨ���캯��
class Person {
public:
	/*Person() {
		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	}*/
	/*Person(int age) {
		m_Age = age;
		cout << "Person ���вι��캯������" << endl;
	}*/
	Person(const Person& p) {
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}


	~Person() {
		cout << "Person��������������" << endl;
	}
	int m_Age;

};

//void test2601() {
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "P2������Ϊ��" << p2.m_Age << endl;
//}

void test2602() {
	//Person p;//��дĬ�Ϲ��캯���ᱨ��

	//Person p(28);//��ǰ���Լ��ṩ�˿������캯�����������Ͳ����ṩ������ͨ���캯��
	//Person p2(p); //�Լ���д�������캯������������Ĭ��д�������캯��
	//cout << "p2������Ϊ��" << p2.m_Age << endl;
}



int main26() {
	//test2601();
	test2602();

system("pause");
return 0;
}