#include<iostream>
using namespace std;

class now{
		int x=55;
public:

	void zero()
	{
		cout<<"this is the real value x = "<<x<<endl;
	}

	void first()
	{
		this-> x=99;
		cout<<"Inside the First function where we put the value of x. Now x = "<<x<<endl;
	}
	void second()
	{
		this-> x=7765;
		cout<<"Inside second function. Here x = "<<x<<endl;
	}
};
int main()
{
	int x=1234;
	now s1;
	s1.zero();
	s1.first();
	s1.second();
	
	s1.zero();  //it takes the updated value of x by this keyword.
}
