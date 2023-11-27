#include<iostream>
using namespace std;
class hello{
	public:
		
		int a;
};
class hello2:public hello{
	public:
		
		int b;
};
int main()
{
	hello2 s1;
	s1.a=30;
	s1.b=11;
	cout<<"a = "<<s1.a<<"\nb=  "<<s1.b<<endl;
}
