#include<iostream>
using namespace std;

class Building38;
class goodGay38 {
public:
	goodGay38();

	void visit3801(); //visit�������Է���Building38��˽�г�Ա
	void visit3802();//�����Է���Building38��˽�г�Ա

	Building38* building38;
};

class Building38 {
	//���߱����� goodGay38���µ�visit3801��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void goodGay38::visit3801();

public:
	Building38();

public:

	string m_SittingRoom;//����

private:

	string m_bedRoom;//����
};

//����ʵ�ֳ�Ա����
Building38::Building38() {
	m_SittingRoom = "����";
	m_bedRoom = "����";

}
goodGay38::goodGay38() {
	building38 = new Building38;
}

void goodGay38::visit3801() {
	cout << "visit3801 ���ڷ��ʣ�" << building38->m_SittingRoom << endl;
	cout << "visit3801 ���ڷ��ʣ�" << building38->m_bedRoom << endl;

}
void goodGay38::visit3802() {
	cout << "visit3802 ���ڷ��ʣ�" << building38->m_SittingRoom << endl;
	//cout << "visit3802 ���ڷ��ʣ�" << building38->m_bedRoom << endl;//���󣬲��ܷ���

}
void test3801() {
	goodGay38 gg;
	gg.visit3801();
	gg.visit3802();
}

int main() {

	test3801();

	system("pause");
	return 0;
}
