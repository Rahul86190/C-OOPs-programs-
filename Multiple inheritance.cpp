#include<iostream>
using namespace std;
class hello{
	public:
		
		int a=22;
};
class hello2{
	public:
		
		int b=33;
};
class hello3:public hello2 ,public hello {
	public:
		int c=44;
};
int main()
{
	hello3 P;
	cout<<P.a<<" "<<P.b<<" "<<P.c<<endl;
}
