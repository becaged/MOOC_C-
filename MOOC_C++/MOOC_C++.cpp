// MOOC_C++.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "code.h"
using namespace std;

int main()
{
	char stop = 'N';
	do
	{ 
		//rate();
		//bubble_sort();
		triangle_Area();//计算三角形面积

		//循环退出命令输入  loop stop condition
		cout << "Input 'y' to exit ";
		cin >> stop;
		cout << "\n\r" << endl;
	} while (stop != 'y' || stop != 'Y' );//输入y或Y退出
	cout << "exit" << endl;
	return 0;
}

