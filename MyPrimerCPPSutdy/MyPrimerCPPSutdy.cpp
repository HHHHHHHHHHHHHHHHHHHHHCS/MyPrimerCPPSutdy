// MyPrimerCPPSutdy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>  
using namespace std;

int main()
{
	cout << "Enter two number:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << endl;
	system("pause");
	return 0;
}

