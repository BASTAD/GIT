#pragma once
#include<cstring>

class Student
{
private:
	char name[20];			//姓名
	char number[20];		//学号
	int  age;			    //年龄
	char Which_Class[20];	    //班级
	//static int HowMany;     //统计人数


public:
	static int HowMany; //初始化静态数据成员
	Student();  //默认构造函数
	Student(char name[], char number[], int age, char Which_Class[]);  //构造函数
	~Student(); //析构函数

	void Show(char number[]);

	void Show();  //浏览
	friend void Add();   //增加学生信息
	void Del();   //删除学生信息
	void Find(int s);  //查找学生
	void Tot();   //统计学生人数

};

extern Student *p[1000];   //类的指针数组,储存每一个学生的信息




	

