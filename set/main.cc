/*************************************************************************
	> File Name: main.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 16时31分07秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include "set.h"

using namespace std;

int main(void)
{
	Set<int>	a;
	a.insert(77);
	a.insert(33);
	a.insert(500);

	cout << a << endl;
	a.print(std::cout);
	cout << endl;
	a.remove(77);
	cout << a << endl;
	cout << "a " 
		<< (a.contains(77) ? "does" : "doesn't")
		<< "contain 77" << endl;

	Set<string>	s;
	s.insert("one");
	s.insert("two");
	s.insert("three");

	cout << s << endl;

	s.remove("three");
	cout << s << endl;

	cout << s.contains("three") << endl;
	return 0;
}

