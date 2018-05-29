#include "stdafx.h"
#include "_01_05_SaleItem.h"
using namespace std;

void _01_05_SaleItem::Test()
{
	Add();
	cin.clear();
	cout << "-------------------------" << endl;
	ReadSome();
	cin.clear();
	cout << "-------------------------" << endl;
	AddTwoSame();
	cin.clear();
	cout << "-------------------------" << endl;
	AddSomeSame();
	cin.clear();
	cout << "-------------------------" << endl;
}

void _01_05_SaleItem::Add()
{
	Sales_item item1, item2;
	cin >> item1.id >> item1.price;
	cin >> item2.id >> item2.price;
	cout << item1.price + item2.price << endl;
}

void _01_05_SaleItem::ReadSome()
{
	int id;
	float price;
	while (cin >> id)
	{
		cin >> price;

		cout << id << "____" << price << endl;
	}
}

void _01_05_SaleItem::AddTwoSame()
{
	int id1, id2;
	float price1, price2;
	while (cin >> id1 >> price1 >> id2 >> price2 )
	{
		if (id1 == id2)
		{
			cout << id1 << " sum :" << price1 + price2 << endl;
		}
		else
		{
			cout << id1 << " != " << id2 << endl;
		}
	}
}

void _01_05_SaleItem::AddSomeSame()
{
	int id1, id2;
	float price, sumPrice=0;
	if (cin >> id1 >> price)
	{
		sumPrice += price;
		while (cin >> id2 >> price)
		{
			if (id1 == id2)
			{
				sumPrice += price;
			}
			else
			{
				cout << id1 << " sum :" << sumPrice << endl;
				sumPrice = price;
				id1 = id2;
			}
		}

	}
}
