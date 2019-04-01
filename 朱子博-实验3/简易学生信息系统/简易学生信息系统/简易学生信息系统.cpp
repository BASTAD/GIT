// 简易学生信息系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cstring>
using namespace std;

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
	
	int temp;							//socket
	while (1)
	{
		cin >> temp;
		if (temp == 0) break;
		


	}
		

	return 0;
}

void run()
{
	
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
