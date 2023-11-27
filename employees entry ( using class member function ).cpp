#include<iostream>
using namespace std;
class hello{
	int id;
	string name;
	public:
		void first();
		void second();
		
};
void hello::first()
{
	cout<<"enter your id number"<<endl;
	cin>>id;
	cout<<"enter your name"<<endl;
	cin>>name;
}
void hello::second()
{
	cout<<"your id is "<<""<<id ;
	cout<<" your name  is "<<""<<name<<endl;
}
int main()
{
	int n,i;
	hello s1;
	cout<<"enter the number of employes"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	
	s1.first();
	s1.second();
	}
}
