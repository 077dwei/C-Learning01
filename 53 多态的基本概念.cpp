#include<iostream>
using namespace std;
 
//��̬
//��󶨣������н׶β�ȷ��������ַ

//������
class Animal {
public:
	//�麯��
	virtual void speak() {
		cout << "Animal speaks" << endl;
	}
};

//è��
class Cat :public Animal {
public:
	void speak() {
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog :public Animal {
public:
	void speak() {
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶ξ�ȷ���˺�����ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�Ҳ���ǵ�ַ���

//��̬��̬��������
//1���̳й�ϵ
//2������Ҫ��д������麯�� speak()����

//3����̬��̬ʹ��
//�����ָ��������� ָ���������
void doSpeak(Animal &animal){ // Animal & animal = cat
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}

int main() {
	test01();

	system("pause");
	return 0;
}