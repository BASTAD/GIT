#include "pch.h"
#include "Student.h"
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;



Student::Student()
{
	;//默认构造函数,暂时没用.
}

Student::Student(char name[], char number[], int age, char Which_Class[])//再次测试
{
	strcpy(this->name, name); 
	strcpy(this->number, number);
	strcpy(this->Which_Class, Which_Class);
	this->age = age;  
	
}


Student::~Student()
{
	printf("学生%s的信息已删除\n", this->name);//...
}




void Student::Show(char number[])
{


}



void Student::Find(int s)
{
	cout << "----查询学生信息" << endl;
	cout << "姓名:" << this->name << "    学号:" << this->number << "    年龄" << this->age<<"    班级"<<this->Which_Class << endl;
}

