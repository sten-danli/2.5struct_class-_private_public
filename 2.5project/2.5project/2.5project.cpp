//2- 5���ṹ��Ȩ�����η�������
//���ĺ�
#include<iostream>
using namespace std;
struct  student
{
	//
	int number;
	char name[100];
};
void func(student tmpstu)
{
	tmpstu.number = 2000;
	strcpy_s(tmpstu.name, sizeof(tmpstu.name), "who");
	return;
	
}