#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stdbool.h>
using namespace std;
class date
{
public:
	date(int year = 1900, int month = 1, int day = 1);//���캯��
	int GetMonthDay(int year, int month);//��������
	date(const date& d);//��������
	date& operator=(const date& d);//�൱�ڿ���
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


