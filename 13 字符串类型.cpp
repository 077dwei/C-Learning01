#include<iostream>
#include<string> //��c++����ַ�����ʱ��Ҫ������ͷ�ļ�
using namespace std;
int main13() {
	// c���Է���ַ���   char ������[] = "�ַ���ֵ";
	// ע����� char �ַ�����[] ����������
	// ע������2���Ⱥź���Ҫ��˫���ţ����������ַ���
	char str1[] = "hello world";
	cout << "c ��� str1 = " << str1 << endl;

	// c++����ַ���   string ������[] = "�ַ���ֵ";
	// ����һ��ͷ�ļ� #include<string> ���ڿ��Բ�����
	string str2 = "hello world";
	cout << "c++ ��� str2 = " << str2 << endl;

	return 0;
}