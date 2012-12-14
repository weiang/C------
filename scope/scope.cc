/*************************************************************************
	> File Name: scope.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月10日 星期一 13时45分28秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <stdio.h>
void f(int);

int main(void)
{
	f(1);
}


void f(int i)
{
	printf("i = %d\n", i);

	{
		int j = 10;
		int i = j;
		printf("i = %d(in)\n", i);
		}

	printf("i = %d(out)\n", i);
}


