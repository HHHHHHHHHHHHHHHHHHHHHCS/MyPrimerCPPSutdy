#include "stdafx.h"
#include "_01_02_HelloWorld.h"

using namespace std;
void _01_02_HelloWorld::Test()
{
	CoutHelloWorld();
	cout << "-------------------------" << endl;
	CoutSumByNumber();
	cout << "-------------------------" << endl;
	CoutMulByNumber();
	cout << "-------------------------" << endl;
	CoutSumWithLine();
	cout << "-------------------------" << endl;
}

void _01_02_HelloWorld::CoutHelloWorld()
{
	cout << "Hello World" << endl;
}

void _01_02_HelloWorld::CoutSumByNumber()
{
	cout << "Enter two number:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << endl;
}

void _01_02_HelloWorld::CoutMulByNumber()
{
	cout << "Enter two number:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " Mul " << v2
		<< " is " << v1 * v2 << endl;
}

void _01_02_HelloWorld::CoutSumWithLine()
{
	cout << "Enter two number:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << endl << v1 << endl << " Mul " << endl << v2
		<< endl << " is " << endl << v1 * v2 << endl;
}