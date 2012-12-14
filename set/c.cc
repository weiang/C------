/*************************************************************************
	> File Name: c.cc
	> Author: Weiang
	> Mail: weiang@mail.ustc.edu.cn 
	> Created Time: 2012年12月09日 星期日 20时11分48秒
    > Describition: 
 ************************************************************************/

#include <iostream>
using namespace std;

template <class T>
class A
{
	public:
		A()
		{
			cout << "Default ctor\n";
		}

		template <class B>
		A(const B& b)
		{
			cout << "Converting from " << b << endl;
		}

		template <class C>
		void f(C c)
		{
			cout << c << endl;
		}
};

int main(void)
{
	A<int> a;
	a.f("hello");
	a.f(1);
	A<float> a2(120);
	a2.f('c');
	return 0;
}
