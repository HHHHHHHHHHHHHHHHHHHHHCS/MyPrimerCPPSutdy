#include "stdafx.h"
#include "_01_04_If.h"

using namespace std;

void _01_04_If::Test()
{
	CountCin();
	cin.clear();
	cout << "-------------------------" << endl;
	CinLessNumber();
	cout << "-------------------------" << endl;

}

void _01_04_If::CountCin()
{
	int  currVal = 0, val = 0;
	if (cin >> currVal)
	{
		int cnt = 1;
		while (cin >> val)
		{
			if (val == currVal)
			{
				cnt++;
			}
			else
			{
				cout << currVal << " occurs " << cnt << " times" << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << " occurs " << cnt << " times" << endl;
	}
}


void _01_04_If::CinLessNumber()
{
	int  currVal = 0, val = 0;
	if (cin >> currVal)
	{
		int cnt = 1;
		while (cin >> val)
		{
			if (val >= currVal)
			{
				cnt++;
			}
			else
			{
				cout << currVal << " greater and equal  " << cnt << " times" << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << "greater and equal" << cnt << "times" << endl;
	}

}

