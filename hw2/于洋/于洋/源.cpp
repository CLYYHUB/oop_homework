#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
	cout << "1.求解一元二次方程$ax ^ 2 + bx + c = 0$的根。\n2.输入三角形三条边边长，输出三角形的面积。\n3.输入年、月、日，格式：2019 - 9 - 17, 判断这一天是该年的第几周第几天。";
	int num;
	cin >> num;
	if (num == 1)
		void Que(float a, float b, float c);
	else if (num == 2)
		void Size(float a, float b, float c);
	else if (num == 3)
		void Day(int a, int b, int c);
	else
		cout << "错误";

}