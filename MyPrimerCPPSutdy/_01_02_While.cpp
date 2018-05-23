#include "stdafx.h"
#include "_01_02_While.h"

using namespace std;

void _01_02_While::Test()
{
	Add();
	cout << "-------------------------" << endl;
	Reduce();
	cout << "-------------------------" << endl;
	PrintNumberByInput();
	cout << "-------------------------" << endl;
}

void _01_02_While::Add()
{
	int sum = 0, i = 50;
	while (i <= 100)
	{
		sum += i++;
	}
	cout << sum << endl;
}

void _01_02_While::Reduce()
{
	int i = 10;
	while (i >= 0)
	{
		cout << i-- << endl;
	}
}

void _01_02_While::PrintNumberByInput()
{
	int a, b;
	cin >> a >> b;
	while (a <= b)
	{
		cout << a++ << endl;
	}
}