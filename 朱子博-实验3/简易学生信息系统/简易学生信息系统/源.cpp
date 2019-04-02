#include "pch.h"
#include <iostream>
#include<cstring>
#include"Student.h"
using namespace std;
static int HowMany = 998; //初始化静态数据成员
Student *p[1000];   //类的指针数组,储存每一个学生的信息
void Add();
int main()
{
	cout << "请输入对应的数字来进行相关操作:" << endl << endl;
	cout << "(1)查询学生信息" << endl << endl;
	cout << "(2)浏览学生信息" << endl << endl;
	cout << "(3)增加学生信息" << endl << endl;
	cout << "(4)删除学生信息" << endl << endl;
	cout << "(5)统计学生人数" << endl << endl;
	cout << "(0)退出系统" << endl;
	cout << "----------------------------------------------" << endl;    //无聊的排版
	while (1)
	{
		int temp,tempfind;  cin >> temp;
		if (temp == 0) break;
		else
		{	if (temp == 3)
			{
				if (HowMany < 999)
				{
					Add();
				}
				else cout << "学生人数已达上限";
			}
			if (temp == 1)
			{
				cout << "请输入要查找的学生的编号(暂时):";
				cin >> tempfind;
				p[tempfind]->Find(tempfind);
			}
		}
	}
	return 0;
}

void Add()
{
	cout << "-->请输入你想要增加的学生的姓名,学号,年龄和所在班级,每一项用空格隔开" << endl;
	char name[20], number[20], Which_Class[20];
	int age;
	cin >> name >> number >> age >> Which_Class;


	HowMany++;
	p[HowMany] = new Student(name, number, age, Which_Class);   //Add 是类Student 的成员函数,可以直接修改Howmany的值
	//p[HowMany]->Add();   
	cout << "Howmany==" << HowMany << endl;




	//Student(name, number, age, Which_Class);
	cout << "输入成功,请继续操作--------" << endl;

	//Student name;

}
