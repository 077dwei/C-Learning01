#include<iostream>
using namespace std;
#include<string>
//��Ԫ
//ȫ�ֺ�������Ԫ

//��������
class Building {
	//goodGay ȫ�ֺ����� Building�����ѣ����Է��� Building ˽�г�Ա
	friend void goodGay(Building* building); //����ȫ�ֺ���Ϊ��Ԫ

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����

};

//ȫ�ֺ���
void goodGay(Building *building) {
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;

}
void test3601() {
	Building building;
	goodGay(&building);
}

int main36() {
	test3601();

	system("pause");
	return 0;
}
