//2- 5���ṹ��Ȩ�����η�������


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

	void func()//��Ա����
	{
		number++;
		return;
	}
};


//���ֵ��÷�ʽ;
//1.�β��ýṹ����.
/*void func(student tmpstu)*///�β��ýṹ����.

//2.�β�����������
//void func(student &tmpstu)//�βα��������//�ں�������ʱ���δ��Ӧ��&ʱ��ֵ���ᱻ�����ı䡣
//{
//	tmpstu.number = 2000;
//	strcpy_s(tmpstu.name, sizeof(tmpstu.name), "who");
//	return;
//}
////3.��ָ��ṹ���ָ��
//void pfunc(student *tmpstu)//��ָ��ṹ���ָ������������
//{
//	tmpstu->number = 16888;//ָ�������
//	strcpy_s(tmpstu->name, sizeof(tmpstu->name), "stenli");
//	return;
//}
int main()     
{
	//һ���ṹ��ع�
	//�ṹ���Զ������������
	student student1;

	student1.number = 10086;
	strcpy_s(student1.name, sizeof(student1.name), "lidan");
	student1.func();
	cout << student1.name << endl;
	cout << student1.number << endl;
	


	//cout << "_____________________________" << endl;

	//func(student1);					//�ں�������ʱ���δ��Ӧ��&ʱ��ֵ���ᱻ�����ı䡣 
	//cout << student1.name << endl;//�ں�������ʱδ��Ӧ��&ʱ��ֵû�������õı������ı䡣//δʹ��& lidan
	//cout << student1.number << endl;;	//ֵû�������õı������ı䣬����������&ʱvoid func(student &tmpstu)�ͻᱻ������ֵ���ı䡣//ʹ��& 10086
	//
	//cout << "_____________________________" << endl;

	////��ָ��ṹ���ָ������������
	//student stu2;
	//stu2.number = 8888;
	//strcpy_s(stu2.name, sizeof(stu2.name), "sten");
	//pfunc(&stu2);//����Ҫ��stu2�ĵ�ַ��
	//cout << stu2.name << endl;
	//cout << stu2.number << endl;

}