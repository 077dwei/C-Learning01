#include<iostream>
using namespace std;

// �������������

//�Զ�������
class MyInteger {
	// �� const ���� MyInteger& ����������ֵ����ֵ������
	friend ostream& operator<<(ostream& cout, const MyInteger& myint);
public:
	MyInteger() {
		m_Num = 0;
	}

	//����ǰ��++�����
	//����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++() {
		//�Ƚ���++����
		m_Num++;

		//�ٽ�����������
		return *this;
	}

	//���غ���++�����(����ֵ)  int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int) {
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�Ľ������
		return temp;
	}

private:
	int m_Num;
};

//�������������
ostream& operator<<(ostream& cout, const MyInteger& myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << "test01" << endl;
	//����
	int i = 0; //�ֲ����� i
	//++i �� = i++ ����������ǰ���ȵ�����ʹ�ã�������ʹ���ٵ���
	cout << "++i ʱ = " << ++i << endl; // ��� 1��i ��Ϊ 1
	cout << "++i �� i = " << i++ << endl; // ��� 1��i ��Ϊ 2
	cout << "i++ �� i  = " << i << endl; // ��� 2
	//begin test MyInteger
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << "test02" << endl;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}