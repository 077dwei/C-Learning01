#include <iostream>
using namespace std;
int main08() {
	// ���������������ڴ�ռ�,���˷�
	// short 2 Byte
	// int 4 Byte
	// long :windows 4 Byte
	// long long  8 Byte

	// ����
	//1�������� (-32768 ~ 32767)
	short num1 = 10;

	//2�� ���� ����
	int num2 = 10;
	//3�� ������
	long num3 = 10;
	//4����������
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	return 0;
}