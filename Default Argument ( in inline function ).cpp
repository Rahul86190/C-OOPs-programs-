#include<iostream>
using namespace std;
inline int hy(int a,int b=8)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"enter a  value"<<endl;
	cin>>a>>b;
	cout<<"result is"<<hy(b*a)<<endl;
}
