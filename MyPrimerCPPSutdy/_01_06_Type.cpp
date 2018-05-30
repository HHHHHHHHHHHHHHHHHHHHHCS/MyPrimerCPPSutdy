#include "stdafx.h"
#include "_01_06_Type.h"
using namespace std;


void _01_06_Type::Test() 
{
	SizeOfType();
}

void _01_06_Type::SizeOfType()
{
	cout << "[bool] length : " << sizeof(bool) << endl
		<< "[char] length : " << sizeof(bool) << endl
		<< "[wchar_t] length : " << sizeof(wchar_t) << endl
		<< "[char16_t] length : " << sizeof(char16_t) << endl
		<< "[char32_t] length : " << sizeof(char32_t) << endl
		<< "[short] length : " << sizeof(short) << endl
		<< "[int] length : " << sizeof(int) << endl
		<< "[long] length : " << sizeof(long) << endl
		<< "[long long ] length : " << sizeof(long long) << endl
		<< "[float] length : " << sizeof(float) << endl
		<< "[double] length : " << sizeof(double) << endl
		<< "[long double] length : " << sizeof(long double) << endl
		<< "[unsigned] length : " << sizeof(unsigned) << endl;
}


void _01_06_Type::UnsignedCal()
{

}


void _01_06_Type::Literal()
{

}
