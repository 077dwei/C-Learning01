#include<iostream>
using namespace std;
//�������캯������ʱ��


class Person {
public:
	Person() {
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	Person(int age) {
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}
	Person(const Person& p) {
		cout << "Person�������캯������" << endl;
		m_Age = p.m_Age;
	}


	~Person() {
		cout << "Person������������" << endl;
	}

	int m_Age;

};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test2501() {
	Person p1(20);
	Person p2(p1);

	cout << "P2�����䣺" << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
//�����ֵ��ֵ���ݵķ�ʽ����Ҳ�ǿ������ݣ�����Ҳ�Ǹ���Ʒ
void doWork(Person p) {
	//�ڴ˴���ֵ����ı�ʵ������
}
void test2502() {
	Person p;
	doWork(p); //ʵ�δ��ݸ��βε�ʱ�����ÿ������캯��
	cout << "test2502�е�pֵ" << p.m_Age << endl;
}

//3��ֵ��ʽ���ؾֲ�����
Person doWork2() { 
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
//���ڱ������Ż������ٵ��ÿ������캯���ˣ�ֱ�ӽ�p1������p��λ��
void test2503() {
	Person p = doWork2();
	cout << (int*)&p << endl;

}



int main25() {
	//test2501();
	//test2502();
	test2503();

	system("pause");
	return 0;
}