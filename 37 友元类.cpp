#include<iostream>
using namespace std;
//������Ԫ

class Building37;//ǰ����������ֹ����
class goodGay37 {
public:

	goodGay37();
	void visit(); //�ιۺ��� ����Building�е�����

	Building37* building37;

};

class Building37 {
	//goodGay37���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class goodGay37;
public:
	Building37();//���캯��
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����

};

goodGay37::goodGay37() {
	//�������������
	building37 = new Building37;
}

//����д��Ա����
Building37::Building37() {
	m_SittingRoom = "����";
	m_BedRoom = "����";

}

void goodGay37::visit() {
	cout << "�û��������ڷ��ʣ�" << building37->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building37->m_BedRoom << endl;

}

void test3701() {
	goodGay37 gg;
	gg.visit();
}

int main() {
	test3701();

	system("pause");
	return 0;
}
