#pragma once
#include<cstring>

class Student
{
private:
	char name[20];			//����
	char number[20];		//ѧ��
	int  age;			    //����
	char Which_Class[20];	    //�༶
	//static int HowMany;     //ͳ������


public:
	static int HowMany; //��ʼ����̬���ݳ�Ա
	Student();  //Ĭ�Ϲ��캯��
	Student(char name[], char number[], int age, char Which_Class[]);  //���캯��
	~Student(); //��������

	void Show(char number[]);

	void Show();  //���
	friend void Add();   //����ѧ����Ϣ
	void Del();   //ɾ��ѧ����Ϣ
	void Find(int s);  //����ѧ��
	void Tot();   //ͳ��ѧ������

};

extern Student *p[1000];   //���ָ������,����ÿһ��ѧ������Ϣ




	

