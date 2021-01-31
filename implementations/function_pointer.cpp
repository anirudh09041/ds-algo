#include<iostream>
using namespace std;
void fun(int a)
{
	cout<<"value of a is "<<a<<endl;
}
int main()
{
	void(*ptr)(int) = &fun;

	(*ptr)(10);

	return 0;
}
