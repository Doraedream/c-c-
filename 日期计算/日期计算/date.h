#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stdbool.h>
using namespace std;
class date
{
public:
	date(int year = 1900, int month = 1, int day = 1);//构造函数
	int GetMonthDay(int year, int month);//求当月天数
	date(const date& d);//拷贝构造
	date& operator=(const date& d);//相当于拷贝
	void print() const;
	bool operator>(const date& d) const;
	bool operator==(const date& d)const;
	bool operator<(const date& d)const;
	bool operator>=(const date& d)const;
	bool operator<=(const date& d)const;
	bool operator!=(const date& d)const;
	date operator+(int day) const;

	date& operator+=(int day);

private:
	int _year;
	int _month;
	int _day;
};


