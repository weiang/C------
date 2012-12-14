/*************************************************************************
	> File Name: person.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 15时05分56秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <new>
#include <string.h>
#include "person.h"
#include "date.h"

static char *clone(const char *s)
{
	char *p = new char[strlen(s) + 1];
	return strcpy(p, s);
}

person::person(const person& p)
	: birth(p.birth)
{
	last = clone(p.last);
	first = clone(p.first);
	ssn = clone(p.ssn);
}

person::person()
	: birth(date(0, 0, 0))
{
	last = clone("");
	first = clone("");
	ssn = clone("");
}


person::person(const char *l, const char *f, const date& b, const char *s)
	: birth(b)
{
	last = clone(l);
	first = clone(f);
	ssn = clone(s);
}

person& person::operator=(const person& p)
{
	if (this != &p) {
		last = clone(p.last);
		first = clone(p.first);
		ssn = clone(p.ssn);
	}
	return *this;
}

person::~person()
{
	delete [] last;
	delete [] first;
	delete [] ssn;
}

ostream& operator<<(ostream &os, const person& p)
{
	os << "{"
		<< p.last << ", "
		<< p.first << ", "
		<< "[" << p.birth << "]" << ", " 
		<< p.ssn
		<< "}";
	return os;
}

bool person::operator==(const person& p) const
{
	return strcmp(last, p.last) == 0 
		&& strcmp(first, p.first) == 0
		&& birth == p.birth 
		&& strcmp(ssn, p.ssn) == 0;
}
