//2- 5　结构、权限修饰符、类简介


#include<iostream>
using namespace std;
//struct  student
//{
//	//
//	int number;
//	char name[100];
//};

struct student
{
	int number;
	char name[100];

	void func()//成员函数
	{
		number++;
		return;
	}
};


//三种调用方式;
//1.形参用结构变量.
/*void func(student tmpstu)*///形参用结构变量.

//2.形参用了了引用
//void func(student &tmpstu)//形参变成了引用//在函数调用时如果未用应用&时，值不会被函数改变。
//{
//	tmpstu.number = 2000;
//	strcpy_s(tmpstu.name, sizeof(tmpstu.name), "who");
//	return;
//}
////3.用指向结构体的指针
//void pfunc(student *tmpstu)//用指向结构体的指针做函数参数
//{
//	tmpstu->number = 16888;//指向运算符
//	strcpy_s(tmpstu->name, sizeof(tmpstu->name), "stenli");
//	return;
//}
int main()     
{
	//一：结构体回顾
	//结构；自定义的数据类型
	student student1;

	student1.number = 10086;
	strcpy_s(student1.name, sizeof(student1.name), "lidan");
	student1.func();
	cout << student1.name << endl;
	cout << student1.number << endl;
	


	//cout << "_____________________________" << endl;

	//func(student1);					//在函数调用时如果未用应用&时，值不会被函数改变。 
	//cout << student1.name << endl;//在函数调用时未用应用&时，值没有所调用的被函数改变。//未使用& lidan
	//cout << student1.number << endl;;	//值没有所调用的被函数改变，但加上引用&时void func(student &tmpstu)就会被函数内值所改变。//使用& 10086
	//
	//cout << "_____________________________" << endl;

	////用指向结构体的指针做函数参数
	//student stu2;
	//stu2.number = 8888;
	//strcpy_s(stu2.name, sizeof(stu2.name), "sten");
	//pfunc(&stu2);//这里要给stu2的地址了
	//cout << stu2.name << endl;
	//cout << stu2.number << endl;

}