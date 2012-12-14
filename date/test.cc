/*************************************************************************
	> File Name: test.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月07日 星期五 23时27分50秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "date.h"

using namespace std;

int main(void)
{
	const size_t	DATELEN = 19;
	char buf[DATELEN + 1];

	date	d1(12, 8, 2012), d2(12, 8, 2012);
//	cout << "d1 == " << d1.format(buf) << endl;
//	cout << "d2 == " << d2.format(buf) << endl;
	
	cout << d1 << endl;
	cout << d2 << endl;
	int cmp = d1.compare(d2);
	cout << "d1 " << (cmp < 0 ? "precede" : (cmp > 0) ? "follows" : "equals")
		 << " d2\n";
}
