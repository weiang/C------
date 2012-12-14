/*************************************************************************
	> File Name: test.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月09日 星期日 20时30分15秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;


size_t	bytes(double& a)
{
	cout << "(using double template)\n";
	return sizeof(a);
}

template <class t>
size_t	bytes(t& a)
{
	cout << "(using primary template)\n";
	return sizeof(a);
}

template <>
size_t bytes<char *>(char *& a)
{
	cout << "(using char template)\n";
	return strlen(a) + 1;
}



int main(void)
{
	int	i;
	cout << "Bytes in i: " << bytes(i) << endl;
	char	*s = "Hello";
	cout << "Bytes in s: " << bytes(s) << endl;
	
	double f;
	cout << "Bytes in s: " << bytes(f) << endl;
	return 0;
}
