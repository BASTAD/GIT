#include "pch.h"
#include "Student.h"
#include<cstdio>
#include<cstring>
using namespace std;

int Student::HowMany = 0; //初始化静态数据成员

Student::Student()
{
	;
}

Student::Student(char name[], char number[], int age, int Which_Class)//再次测试
{
	strcpy(this->name, name); 
	strcpy(this->number, number);
	this->age = age;  
	this->Which_Class = Which_Class;
}


Student::~Student()
{
	printf("学生%s的信息已删除\n", this->name);//...
}




void Student::Show(char number[])
{


}

void Student::Show(int a)
{


}

void Student::Add()
{
	char name[20], number[20];
	int age, Which_Class;
	scanf("%s,%s,%d,%d", &name, &number, &age, &Which_Class);

	//Student name;
	Student name(name, number, age, Which_Class);
}

