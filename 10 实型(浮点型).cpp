#include<iostream>
using namespace std;
int main10() {

	//1�������� float  (7λ��Ч����)
	//2��˫���� double  (15-16λ��Ч����)
	// Ĭ������� ���һ��С��������ʾ��6λ��Ч����
	float f1 = 3.14f;
	// ���� f ����������Ĭ��Ϊ˫�������ͣ����� f ���ǵ���������
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;


	// �Լ���
	float num1 = 10.0f;
	double num2 = 10; //int
	cout << "num1(float)Ϊ:" << num1 << endl;


	// �ڴ�ռ�ÿռ��С
	cout << "float ռ���ڴ��С��" << sizeof(float) << endl; // 4
	cout << "double ռ���ڴ��С��" << sizeof(double) << endl; // 8

	// ��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2; ���e����������
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; // 3 * 0.1 ^2; ���e�����Ǹ���
	cout << "f3 = " << f3 << endl;

	return 0;
}