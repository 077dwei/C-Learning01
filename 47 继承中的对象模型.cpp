#include<iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base {
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
// ����
// c1 /d1 reportSingleClassLayout���� "�ļ���"


void test01() {
	//�ڸ��������зǾ�̬��Ա���Զ��ᱻ�̳���ȥ
	//������˽�г�Ա���� �Ǳ������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��

	cout << "size of Son = " << sizeof(Son) << endl; // 16
}

int main() {
	test01(); 

	system("pause");
	return 0;
}