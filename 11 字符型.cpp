#include <iostream>
using namespace std;
int main11() {
	// 1���ַ��ͱ���������ʽ
	char ch = 'a'; // ����������ֻ�ܷ�һ���ַ�
	cout << "ch = " << ch << endl;

	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char ռ�õ��ڴ��С��" << sizeof(char) << endl;

	//3���ַ��ͳ�������
	//char ch2 = "b"; ���󣬲�����˫���Ŵ����ַ��ͱ���
	//char ch2 = 'abcdef'; �����ַ��ͱ���ʱ����������ֻ�ܴ�һ���ַ�


	//4���ַ��ͱ�����Ӧ ASCII ����
	// ǿ��ת�����鿴 ASCII ����
	cout << (int)ch << endl; // ��� 97 ����˼�� a �ڵײ����� 97 ��ch = a;
	// ������ASCII
	//a - 97
	//A - 65


	return 0;
}