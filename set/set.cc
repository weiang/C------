/*************************************************************************
	> File Name: set.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 16时21分38秒
    > Describition: 
 ************************************************************************/
#include "set.h"
#include <iostream>
#include <algorithm>

using namespace std;

template <typename obj>
Set<obj>::Set()
{
	nelems = 0;
}

template <class obj>
bool Set<obj>::contains(const obj& o) const
{
	const obj *eof = elems + nelems;
	return std::find(elems, eof, o) != eof;
}

template <class obj>
void Set<obj>::insert(const obj& o) 
{
	if (nelems < LIMIT && !contains(o)) 
		elems[nelems ++] = o;
}

template <class obj>
void Set<obj>::remove(const obj& o)
{
	obj *eof = elems + nelems;
	if (std::remove(elems, eof, o))
			-- nelems;
}

template <class obj>
void Set<obj>::print(ostream& os) const
{
	os << "{";
	for (int i = 0; i < nelems; i ++) {
		if (i > 0)
			os << ',';
		os << elems[i];
	}
	os << "}";
}

template <class obj>
std::ostream& operator<<(std::ostream& os, const Set<obj> s)
{
	s.print(os);
	return os;
}
			


