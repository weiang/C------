/*************************************************************************
	> File Name: person.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 10时45分10秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include "person.h"

person::person(const string& l, const string& f, const date& d, const string& s)
	: last(l), first(f), birth(d), ssn(s)
{
}

bool person::operator==(const person& p) const
{
	return (last == p.last && first == p.first
			&& birth == p.birth && ssn == p.ssn);
}

ostream& operator<<(ostream& os, const person& p) 
{
	os	<< '{' 
		<< p.last << ", "
		<< p.first << ", "
		<< '[' << p.birth << "] "
		<< p.ssn << "} ";
	return os;
}
