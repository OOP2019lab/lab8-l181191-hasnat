#pragma once
#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Date
{
private:
	/*static string month[12];*/
	int month;
	string month1;
	int day;
	int year;
	bool printmon(int);

public:
	Date(void);
	Date(int, int, int);
	~Date(void);
	friend ostream& operator << (ostream &out, const Date &a);
	friend istream& operator >> (istream &object,  Date &a)
	{
		cout << endl << "Enter Day";
		object >> a.day;
		if (a.day > 31 || a.day < 0)
		{
			cout << "Enter a value less than 30 and greater then 0" << endl;
			object >> a.day;
		}
		return object;
	}
	Date operator +(int num)
	{
		Date x;
		x.day = this->day + num;
		x.month = this->month;
		x.year = this->year;
		while (x.day>31)
		{
			x.month++;
			while (x.month>12)
			{
				x.year++;
			}
			x.day = x.day - 31;
		}
		printmon(x.month);
		return x;
	}
	void operator = (const Date &D)
	{
		day = D.day;
	}
	Date operator -- ()//prefix
	{
		day = this->day--;
		if (day <= 0)
		{
			month--;
			day = day + 31;
			if (month <= 0)
			{
				year--;
				month = month + 12;
			}
		}
		printmon(month);
		return Date(day, month, year);
	}

	Date operator --(int)
	{
		Date a(day, year, month);

		day = this->day--;
		if (day <= 0)
		{
			month--;
			day = day + 31;
			if (month <= 0)
			{
				year--;
				month = month + 12;
			}
		}
		printmon(month);

		return a;
	}
	bool operator == (const Date &a);
	int &operator[](int i)
	{
		if (i>2)
		{
			cout << "Enter 0,1 or 2;";
		}
		if (i == 0)
			return day;
		if (i == 1)
			return month;
		if (i == 2)
			return year;
	}


};



