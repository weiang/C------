/*************************************************************************
	> File Name: test.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 17时03分15秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define genswap(T)		\
void swap(T& x, T& y)	\
{						\
	T tmp = x;			\
	x = y;				\
	y = tmp;			\
}

genswap(int)
genswap(float)
genswap(char *)

int main(void)
{
	int a = 1, b =2;

	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	char *c = "Hello", *d = "World";
	swap(c, d);
	cout << c << " " << d << endl;
	return 0;
}
