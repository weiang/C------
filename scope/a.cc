/*************************************************************************
	> File Name: a.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月10日 星期一 15时11分17秒
    > Describition: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int	i = 10;
int main(void)
{
	int i = 20;
	cout << "Local i: " << i << endl;
	cout << "Global i: " << :: i << endl;
	return 0;
}

