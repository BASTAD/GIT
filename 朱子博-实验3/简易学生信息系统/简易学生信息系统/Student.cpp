#include "pch.h"
#include "Student.h"
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;



Student::Student()
{
	;//Ĭ�Ϲ��캯��,��ʱû��.
}

Student::Student(char name[], char number[], int age, char Which_Class[])//�ٴβ���
{
	strcpy(this->name, name); 
	strcpy(this->number, number);
	strcpy(this->Which_Class, Which_Class);
	this->age = age;  
	
}


Student::~Student()
{
	printf("ѧ��%s����Ϣ��ɾ��\n", this->name);//...
}




void Student::Show(char number[])
{


}



void Student::Find(int s)
{
	cout << "----��ѯѧ����Ϣ" << endl;
	cout << "����:" << this->name << "    ѧ��:" << this->number << "    ����" << this->age<<"    �༶"<<this->Which_Class << endl;
}

