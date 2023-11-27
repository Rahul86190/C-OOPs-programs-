#include<iostream>
using namespace std;
class hello{
	int a;
	public :
		hello(int num)
		{
			a=num;
		}
		hello(hello &copy)
		{
			cout<<"this is copy constructor..."<<endl;
			a=copy.a;
			
			
		}
		void hi()
		{
			cout<<"value of a is "<<a<<endl;
		}
};
int main()
{
	hello s1(90);
	hello s2(s1);
	s1.hi();
	s2.hi();
}
