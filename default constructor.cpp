#include<iostream>
using namespace std;
class hello{
	int a,b;
	public:
		hello();
		void hy()
		{
			cout<<"addition is "<<a+b<<endl;
		}
};
hello::hello()
{
	a=2;
	b=70;	
}
int main()
{
	hello s1;
	s1.hy();
}
