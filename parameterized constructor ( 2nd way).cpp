#include<iostream>
using namespace std;
class hello{
	int a,b;
	public:
		hello(int x,int y)
		{
			a=x;
			b=y;
		}
		void hy()
		{
			cout<<"this is " <<a<<"+"<<b<<"="<<a+b<<endl;
			
		}
};
int main()
{
	
	hello s1(8,9);
	s1.hy();
}
