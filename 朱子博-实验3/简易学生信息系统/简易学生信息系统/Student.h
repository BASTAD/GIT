#pragma once
#include<cstring>

class Student
{
private:
	char name[20];			//����
	char number[20];		//ѧ��
	int  age;			    //����
	char Which_Class;	    //�༶
	static int HowMany;     //ͳ������


public:
	Student();  //Ĭ�Ϲ��캯��
	Student(char name[], char number[], int age, int Which_Class);  //���캯��
	~Student(); //��������

	void Show(char number[]);

	void Show();  //���
	void Add();   //����ѧ����Ϣ
	void Del();   //ɾ��ѧ����Ϣ
	void Find();  //����ѧ��
	void Tot();   //ͳ��ѧ������

};

