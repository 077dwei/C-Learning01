#include<iostream>
using namespace std;
//��̬��Ա����
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���������ܷ��ʷǾ�̬��Ա����
//���ж�����ͬһ�ݺ���
class Person {
public:
	//��̬��Ա����
	static void func() {
		m_a = 100; //���Է��ʾ�̬��Ա���� // ��������
		//m_b = 100; //���󣬲��ܷ��ʷǾ�̬��Ա���� // �޷��������ĸ�����ķǾ�̬��Ա����
		cout << "static boid func���� " << endl;
	}

	static int m_a; //��̬��Ա����
	int m_b; //�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2() {
		cout << "static void func2����" << endl;
	}
};
int Person::m_a = 0; //��̬��Ա������ʼ��

int main31() {
	//1��ͨ���������
	Person p;
	p.func(); //ͨ��������ʾ�̬��Ա����
	//2,ͨ����������
	Person::func(); //ͨ���������ʾ�̬��Ա����
	//Person::func2();//����������ʲ���˽�еľ�̬��Ա����
	system("pause");
	return 0;
}