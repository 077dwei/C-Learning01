#include<iostream>
using namespace std;
//������
class Person35 {
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//Person * const this //ָ�벻�ܸ�
	//const Person * const this //ָ��Ͷ��󶼲��ܸ�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const { 
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;// thisָ�벻�����޸�ָ���ָ��

	}

	void func() {
		m_A = 100; //�����޸ĳ�Ա����
	}

	int m_A = 0;
	mutable int m_B = 0;//�����������ʹ�ڳ������У�Ҳ�����޸ģ����Ϲؼ���mutable
};

void test3501() {
	Person35 p;
	p.showPerson(); //���ó�����
	cout << "m_B = " << p.m_B << endl;
}

//������
void test3502() {
	const Person35 p; //������
	//p.m_A = 100; //���󣬳�����ĳ�Ա���������޸�
	p.m_B = 100; //��ȷ��mutable���εĳ�Ա���������޸ģ���ʹ�ڳ�������Ҳ�����޸�
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func(); //���󣬳������ܵ��÷ǳ���������Ϊ��ͨ��Ա���������޸�����

}

int main35() {
	test3501();
	system("pause");
	return 0;
}
