#include<iostream>
using namespace std;
//��ָ����ó�Ա����
class Person34 {
public:
	void showClassName() {
		cout << "this is Person34 class" << endl;
	}

	void showPersonAge() {
		//��ֹ����
		if (this == NULL) {
			return;
		}
		//�����ԭ�򣺿�ָ����ó�Ա������thisָ��Ϊ�գ����ʳ�Ա�����ᵼ�´���
		cout << "age = " << this->m_Age << endl;
	}
	int m_Age;
};
void test3401() {
	Person34* p = NULL;
	p->showClassName();

	p->showPersonAge();
}

int main34() {
	test3401();

	system("pause");
	return 0;
}
