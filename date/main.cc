/*************************************************************************
	> File Name: main.c
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月08日 星期六 10时56分20秒
    > Describition: 
 ************************************************************************/

#include "person.h"
#include <iostream>

int main(void)
{
	date	d(4, 2, 1993);
	person p("a", "w");  
	cout << p << endl;
	return 0;
}
