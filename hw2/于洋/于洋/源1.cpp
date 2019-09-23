#include <stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

void Que(float a, float b, float c)
{
	cout << "请输入a,b,c:";
	cin >> a >> b >> c;
	float d;
	d = b * b - 4 * a*c;
	if (d < 0)
		cout << "无解";
	else if (d == 0)
		cout << "解为" << -1 * b / 2 / a << ".";
	else if (d > 0)
		cout << "解为" << (-b + sqrt(d)) / 2 / a << "和" << (-b + sqrt(d)) / 2 / a;
}

void Size(float a, float b, float c)
{
	cout << "请输入三边长：";
	cin >> a >> b >> c;
	float k = (a + b + c) / 2;
	float s;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		s = sqrt(k*(k - a)*(k - b)*(k - c));
		cout << "面积为：" << s;
	}
	else
		cout << "无法构成三角形";
}

void Day(int a, int b, int c)
{
	cout << "请输入年-月-日：";
	cin >> a >> b >> c;
	int T=0;
	for (int i = b; i > 0; i++)
	{
		if (i + 1 == 2)
			T = T + 28;
		else if (i + 1 == 1 || i + 1 == 3 || i + 1 == 5 || i + 1 == 7 || i + 1 == 8 || i + 1 == 10 || i + 1 == 12)
			T = T + 31;
		else if (i + 1 == 4 || i + 1 == 6 || i + 1 == 9 || i + 1 == 11)
			T = T + 30;
	}
	int n , m;
	m = 1;
	for (; T <= 7; T = T - 7)
		m++;
	n = T;
	cout << "第" << m << "周的第" << n << "天";
}