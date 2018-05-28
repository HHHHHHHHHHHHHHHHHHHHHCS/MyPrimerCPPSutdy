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

}

void _01_05_SaleItem::AddTwoSame()
{

}

void _01_05_SaleItem::AddSomeSame()
{

}
