#include<iostream>
using namespace std;
class hello{
	int a;
	friend int now(hello);
};
int now(hello s1)
{
	s1.a=30;
	cout<<"friend function variable a is "<<s1.a<<endl;
}
int main()
{
	hello s1;
	now(s1);
}
