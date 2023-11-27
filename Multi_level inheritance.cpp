#include<iostream>
using namespace std;
class hello{
	public:
		
		int a=22,b=56;
};
class hello2:public hello{
	public:
		
		int c=33,d=45;
};
class hello3:public hello2{
	public:
	
		int  e=33,f=88;
};
int main()
{
	hello s1;
	hello2 s2;
	hello3 s3;
	cout<<"my name is rahul"<<endl;
	cout<<"inheritance store"<<endl;
	cout<<"clear your doubt"<<endl;
	cout<<"a= "<<s1.a<<"\nb= "<<s3.b<<"\nc= "<<s3.c<<"\nd= "<<s3.d<<"\ne= "<<s3.e<<"\nf= "<<s3.f<<"\na= "<<s3.a<<endl;
}
