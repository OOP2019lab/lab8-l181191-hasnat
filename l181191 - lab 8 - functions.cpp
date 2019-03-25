#include "l181191- lab8-header.h"
#include <iostream>
#include <string>

using namespace std;

bool Date::printmon(int num)
{
	int flag = 0;
	if (num <13 && num>0)
	{
		if (num == 1)
		{
			month1 = "January";
		}
		if (num == 2)
		{
			month1 = "February";
		}if (num == 3)
		{
			month1 = "March";
		}
		if (num == 4)
		{
			month1 = "April";
		}if (num == 5)
		{
			month1 = "May";
		}if (num == 6)
		{
			month1 = "June";
		}if (num == 7)
		{
			month1 = "July";
		}
		if (num == 8)
		{
			month1 = "August";
		}if (num == 9)
		{
			month1 = "September";
		}
		if (num == 10)
		{
			month1 = "October";
		}if (num == 11)
		{
			month1 = "November";
		}if (num == 12)
		{
			month1 = "December";
		}
		flag = 1;
		return flag;
	}
	else
	{
		month1 = "January";
		day = 1;
		year = 2000;
		return flag;
	}
}



Date::Date(void)
{
	day = 1;
	month = 1;
	year = 2000;
	printmon(month);
}


Date::Date(int month, int day, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
	printmon(month);
}



Date::~Date(void)
{
}

ostream& operator << (ostream &out, const Date &a)
{
	out << a.month1 << "," << a.day << "," << a.year;
	return out;
}

bool Date::operator == (const Date &a)
{
	if (year == a.year && day == a.day && month == a.month)
		return true;

	else
		return false;
}




