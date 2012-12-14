/*************************************************************************
	> File Name: date2.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月07日 星期五 23时42分19秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <string>
#include "date2.h"

typedef struct DP
{	
	DP(int, int , int);
	
	private:
		friend class date;
		int month;
		int day;
		int year;
} dp;

const char *date::month_text[13] = {"Bad month", "January", "Febrary", "March", "Arpil",
							"May", "June", "July", "August", "Sepetmber", 
							"Octorber", "Noverber", "December"};

DP::DP(int m, int n, int y)
	: month(m), day(n), year(y) {}

date::date(int m, int d, int y)
{
	p = new DP(m, d, y);
}

date:: ~date()
{
	delete p;
}

char *date::format(char *buf) const
{
	sprintf(buf, "%s %d, %d", month_text[p -> month], p -> day, p -> year);
	return buf;
}

int date::compare(const date &d2)	const
{
	int result = p -> year - d2.p -> year;
	if (result == 0)
		result = p -> month - d2.p -> month;
	if (result == 0)
		result = p -> day - d2.p -> day;
	return result;
}

