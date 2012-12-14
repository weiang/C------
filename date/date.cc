/*************************************************************************
	> File Name: date.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月07日 星期五 23时20分08秒
    > Describition: 
 ************************************************************************/
#include "date.h"
#include <stdio.h>
#include <iostream>

const char *date::month_text[] = {"Bad month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Nobember", "December"};

date::date(int m, int d, int y)
	: month(m), day(d), year(y) {}

char *date::format(char *buf) const
{
	sprintf(buf, "%s %d, %d", month_text[month], day, year);
	return buf;
}

int date::compare(const date &dp) const
{
	int result = year - dp.year;
	if (result == 0)
		result = month - dp.month;
	if (result == 0)
		result = day - dp.day;
	return result;
}

ostream& operator<<(ostream & os, const date & d)
{
	os << date::month_text[d.month] << " "
		<< d.day << ", "
		<< d.year;
}
