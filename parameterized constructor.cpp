#include<iostream>
using namespace std;
class hello{
	int a,b;
	public:
		hello(int,int);
		void hy()
		{
			cout<<"this is parameterized constructor " <<a<<"+"<<b<<"="<<a+b<<endl;
			
		}
};
hello::hello(int x,int y)
{
	a=x;
	b=y;
	
}
int main()
{
	int r1,r2;
	cout<<"enter valuse"<<endl;
	cin>>r1>>r2;
	hello s1(r1,r2);
	s1.hy();
}
