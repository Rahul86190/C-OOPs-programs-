#include<iostream>
using namespace std;
inline int hy(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"addition is"<<hy(a,b);
}
