#include<iostream>
using namespace std;
//���캯���ķ��༰����
//����
//  ���ղ�������   �޲ι��� �� �вι���
//  �������ͷ���   ��ͨ����  ��������
class Person {
public:
	//��ͨ���캯��
	Person() { //������Ĭ���ṩ�޲ι���
		cout << "Person ���޲ι��캯������" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person ���вι��캯������" << endl;
	}
	
	~Person() {
		cout << "Person ��������������" << endl;
	}

	//�������캯��
	Person(const Person &p) { //ʹ��const��˼�ǲ��ܰ�ԭ�������ݸ��ˣ�&������
		//������������ϵ��������ԣ���������
		cout << "Person �Ŀ������캯������" << endl;
		age = p.age;
	}

	int age;

};

//����

void test24() {
	//1�����ŷ�
	//Person p1; //Ĭ�Ϲ��캯������
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��

	//ע������
	//Person p1(); //û�����
	//����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ��()
	//��Ϊ�������д��룬����������Ϊ��һ�����������������Բ�����Ϊ�ڴ�������
	// ������
	//��������   ������
	//void func();

	//cout << "p1�����䣺" << p1.age << endl; //û��ֵ
	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;

	////2����ʾ��
	//Person p1; //Ĭ�Ϲ���
	Person p2 = Person(10);//�вι���
	////��������
	Person p3 = Person(p2);

	//Person(10); //�����ó����� ���������ص㣬��ǰִ�н�����ϵͳ���������յ���������
	//
	//cout << "aaaaa" << endl; //�������������������ӡ

	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ���������󡣱���������Ϊ Person(p3) == Person p3; �����ض���
	//Person(p3); // ����������Ϊ�Ƕ��������
	//Person p5(p3); //Person p5 = p3  -> Person p5 = Person(p3)

	
	//3����ʽת����
	Person p4 = 10;//�൱�� д�� Person p4 = Person(10);
	Person p5 = p4; //��������


}





int main24() {
	test24();

	system("pause");
	return 0;
}