#include <iostream>
using namespace std;
int main09() {
	// ������ sizeof ����������ռ�õ��ڴ�Ĵ�С
	// �﷨: sizeof(�������� or ����)
	short num1 = 10;
	cout << "short ռ���ڴ�ռ�Ϊ: " << sizeof(short) << endl;
	cout << "��short����num1ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl; // num1 �Ѿ�������Ϊshort������

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ: " << sizeof(int) << endl;

	long num3 = 10;
	cout << "long ռ���ڴ�ռ�Ϊ: " << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long ռ���ڴ�ռ�Ϊ: " << sizeof(long long) << endl;

	// ���ʹ�С�Ƚ�
	// short < int <=  long  <=  long long 

	return 0;
}