#include<iostream>
using namespace std;
//�����������������  ()

//��ӡ�����
class MyPrint {
public:

	//���غ������������
	void operator()(const string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;

}

void test01() {
	MyPrint myPrint;

	myPrint("hello world");  //����ʹ�������ǳ������ں������ã���˳�Ϊ�º���

	MyPrint02("hello world");
}

//�º����ǳ�����û��һ���̶���д��
//�ӷ���
class MyAdd{
public:
	
	int operator()(const int num1, const int num2) {
		return num1 + num2;
	}
};

void test02() {
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;

	//������������
	cout << "������������ MyAdd()(100, 100): " << MyAdd()(100, 100) << endl; //�������������������̱��ͷ�

}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}