#include<iostream>
using namespace std;
 
//多态案例2 制作饮品
class AbstractDrinking {

public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//调入杯中
	virtual void PourInCup() = 0;

	//加入辅助佐料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class Coffee :public AbstractDrinking {
	//煮水
	virtual void Boil() {
		cout << "煮水农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}

	//调入杯中
	virtual void PourInCup() {
		cout << "导入杯子里" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶叶
class Tea :public AbstractDrinking {
	//煮水
	virtual void Boil() {
		cout << "煮水矿泉水" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲泡茶叶" << endl;
	}

	//调入杯中
	virtual void PourInCup() {
		cout << "导入杯子中" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething() {
		cout << "加入枸杞" << endl;
	}
};

//制作函数
//对于 doWork(new Coffee), 相当于 AbstractDrinking * abs = new Coffee;
void doWork(AbstractDrinking * abs) { //形参
	abs->makeDrink();
	delete abs; //释放
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
