#include<iostream>
using namespace std;
 
//��̬����2 ������Ʒ
class AbstractDrinking {

public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨������
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee :public AbstractDrinking {
	//��ˮ
	virtual void Boil() {
		cout << "��ˮũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭����" << endl;
	}

	//���븨������
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class Tea :public AbstractDrinking {
	//��ˮ
	virtual void Boil() {
		cout << "��ˮ��Ȫˮ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭����" << endl;
	}

	//���븨������
	virtual void PutSomething() {
		cout << "�������" << endl;
	}
};

//��������
//���� doWork(new Coffee), �൱�� AbstractDrinking * abs = new Coffee;
void doWork(AbstractDrinking * abs) { //�β�
	abs->makeDrink();
	delete abs; //�ͷ�
}

void test01() {
	doWork(new Coffee);

	cout << "---------------------------" << endl;
	doWork(new Tea);
}

int main() {
	test01();

	system("pause");
	return 0;
}
