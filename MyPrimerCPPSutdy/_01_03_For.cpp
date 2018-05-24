#include "stdafx.h"
#include "_01_03_For.h"

using namespace std;

void _01_03_For::Test()
{
	Sum();
	cout << "-------------------------" << endl;
	Add();
	cout << "-------------------------" << endl;
	Reduce();
	cout << "-------------------------" << endl;
	PrintNumberByInput();
	cout << "-------------------------" << endl;
}

void _01_03_For::Sum()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	cout << sum << endl;
}
void _01_03_For::Add()
{
	int sum = 0;
	for (int i = 50; i <= 100;i++)
	{
		sum += i++;
	}
	cout << sum << endl;
}

void _01_03_For::Reduce()
{
	for (int i = 10; i >= 0;i--)
	{
		cout << i << endl;
	}
}

void _01_03_For::PrintNumberByInput()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		cout << i << endl;
	}
}