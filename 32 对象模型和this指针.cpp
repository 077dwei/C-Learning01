#include<iostream>
using namespace std;
//��Ա���� �� ��Ա���� �ֿ��洢��
class Person32 {
	int m_A; ;// ֻ�У��Ǿ�̬��Ա���� ������Ķ�����

	static int m_B; // ��̬��Ա���� ��������Ķ�����

	void func() {} // �Ǿ�̬��Ա���� ��������Ķ�����

	static void func2() {} // ��̬��Ա���� ��������Ķ�����
};
int Person32::m_B = 0; // ��̬��Ա������ʼ��

void test3201() {
	Person32 p;

	cout << "size of p = " << sizeof(p) << endl; //�ն���ռ�õ��ڴ��С��1���ֽ�
	//��Ϊ�ն���Ĵ�С����Ϊ0�����Ա����������1���ֽڵ��ڴ�ռ�������������
	//����ֽڵ��ڴ�ռ����������ֲ�ͬ�����
	//���û������ֽڣ����������޷����ֲ�ͬ�����ˣ����ڿն��������֣�

}
void test3202() {
	Person32 p;

	cout << "size of p = " << sizeof(p) << endl;
}

int main32() {

	//test3201();
	test3202(); //4���ֽ�

	system("pause");
	return 0;
}
