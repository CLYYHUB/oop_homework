#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
	cout << "1.���һԪ���η���$ax ^ 2 + bx + c = 0$�ĸ���\n2.���������������߱߳�����������ε������\n3.�����ꡢ�¡��գ���ʽ��2019 - 9 - 17, �ж���һ���Ǹ���ĵڼ��ܵڼ��졣";
	int num;
	cin >> num;
	if (num == 1)
		void Que(float a, float b, float c);
	else if (num == 2)
		void Size(float a, float b, float c);
	else if (num == 3)
		void Day(int a, int b, int c);
	else
		cout << "����";

}