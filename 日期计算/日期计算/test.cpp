#define _CRT_SECURE_NO_WARNINGS 1
#include"date.h"
int main()
{
	date d1(1,1,1);
	date d2 = d1;
	d2.print();
	date d3;
	d3=d2 + 100;
	d3.print();
	return 0;
}

