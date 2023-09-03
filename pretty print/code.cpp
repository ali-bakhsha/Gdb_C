#include <iostream>

using namespace std;

class A{
	int i;
	public: A(int i):i{i}{}
};

class B{
	A a;
	public: B(int a):a{a}{}
};

class C{
	B b; A ca;
	public: C(int a , int b):b{b}, ca{a}{}
};

int main()
{
	C c = {1,2};
	return 0;
}