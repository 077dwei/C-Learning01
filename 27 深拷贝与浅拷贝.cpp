#include<iostream>
using namespace std;
//�����ǳ����

class Person27 {
public:
	Person27() {
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person27(int age, int height) {
		m_Age = age;
		m_Height = new int(height);//�ֶ����٣��ֶ��ͷ�

		cout << "Person���вι��캯������" << endl;
	}
	//�Լ�ʵ�ֿ������캯��  ���ǳ��������������
	Person27(const Person27& p) {
		cout << "Person �������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//������Ĭ��ʵ�־������д���
		//�������
		m_Height = new int(*p.m_Height); //�����µĶ�������
	}

	~Person27() {
		//�����������������ͷŲ���  �����ĸ����ͱ��������ڴ���߸��ı��ͷ�
		if(m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person���������캯������" << endl;
	}

	int m_Age;//����
	int* m_Height;//���

};

void test2701() {
	Person27 p271(18, 160);
	cout << "p1������Ϊ��" << p271.m_Age << "���Ϊ��" << *p271.m_Height << endl;
	Person27 p272(p271);
	cout << "p2������Ϊ��" << p272.m_Age << "���Ϊ��" << *p272.m_Height << endl; //����������ǳ��������
}


int main27() {
	test2701();

	system("pause");
	return 0;
}