#include<iostream>
using namespace std;
//构造函数的分类及调用
//分类
//  按照参数分类   无参构造 和 有参构造
//  按照类型分类   普通构造  拷贝构造
class Person {
public:
	//普通构造函数
	Person() { //编译器默认提供无参构造
		cout << "Person 的无参构造函数调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person 的有参构造函数调用" << endl;
	}
	
	~Person() {
		cout << "Person 的析构函数调用" << endl;
	}

	//拷贝构造函数
	Person(const Person &p) { //使用const意思是不能把原来的数据改了，&是引用
		//将传入的人身上的所有属性，拷贝过来
		cout << "Person 的拷贝构造函数调用" << endl;
		age = p.age;
	}

	int age;

};

//调用

void test24() {
	//1、括号法
	//Person p1; //默认构造函数调用
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数

	//注意事项
	//Person p1(); //没有输出
	//调用默认构造函数时候，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明，所以不会认为在创建对象
	// 类似于
	//返回类型   函数名
	//void func();

	//cout << "p1的年龄：" << p1.age << endl; //没有值
	//cout << "p2的年龄：" << p2.age << endl;
	//cout << "p3的年龄：" << p3.age << endl;

	////2、显示法
	//Person p1; //默认构造
	Person p2 = Person(10);//有参构造
	////拷贝构造
	Person p3 = Person(p2);

	//Person(10); //单独拿出来叫 匿名对象，特点，当前执行结束后，系统会立即回收掉匿名对象
	//
	//cout << "aaaaa" << endl; //出现在析构函数后面打印

	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象。编译器会认为 Person(p3) == Person p3; 所以重定义
	//Person(p3); // 编译器会认为是对象的声明
	//Person p5(p3); //Person p5 = p3  -> Person p5 = Person(p3)

	
	//3、隐式转换法
	Person p4 = 10;//相当于 写了 Person p4 = Person(10);
	Person p5 = p4; //拷贝构造


}





int main24() {
	test24();

	system("pause");
	return 0;
}