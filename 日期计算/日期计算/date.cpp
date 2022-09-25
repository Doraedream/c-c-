#define _CRT_SECURE_NO_WARNINGS 1
#include"date.h"
int date::GetMonthDay(int year, int month)
{
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = arr[month];
	if ((month==2)&&(year % 4 == 0 && year % 100 != 0) && (year % 400 == 0))
		day++;
	return day;
}

date::date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}//¹¹Ôìº¯Êı

date::date(const date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

date& date::operator=(const date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	return *this;
}

void date::print() const
{
	cout << _year << " " << _month << " " << _day << endl;
}

bool date::operator>(const date& d) const
{
	if (_year > d._year)
		return true;
	else if (_year == d._year && _month > d._month)
		return true;
	else if (_year == d._year && _month == d._month && _day > d._day)
		return true;
	else return false;
}

bool date::operator==(const date& d) const
{
	if (_year == d._year && _month == d._month && _day == d._day)
		return true;
	else return false;
}
bool date::operator<(const date& d)const
{
	return !((*this > d) || (*this == d));
}

bool date::operator>=(const date& d)const
{
	return !(*this < d);
}

bool date::operator<=(const date& d)const
{
	return !(*this > d);
}

bool date::operator!=(const date& d)const
{
	return !(*this == d);
}

date& date::operator+=(int day)
{
	_day += day;
	while (_day >= GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month > 12)
		{
			_month = 0;
			_year++;
		}
	}
	return *this;
}

date date::operator+(int day)  const
{
	date ret(*this);
	//ret.operator+=(day);
	ret += day;

	return ret;
}