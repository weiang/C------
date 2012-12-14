/*************************************************************************
	> File Name: main.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 15时21分43秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include "person.h"
#include "date.h"

using namespace std;

int main(void)
{
	date d1(12, 16, 1947);
	person	p1("Richardson", "Alice", d1, "123");
	person	p2("Doe", "John");

	cout << "p1 == " << p1 << endl;
	cout << "p2 == " << p2 << endl;
	
	person p3;
	p3 = p2;	
	cout << "p3 == " << p3 << endl;
	return 0;
}
