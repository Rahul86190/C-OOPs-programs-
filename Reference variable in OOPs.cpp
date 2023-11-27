#include<iostream>
using namespace std;
int main()
{
	int a;
	int &ref=a;
	ref=20;
	cout<<a<<endl;
	a=56;
	cout<<ref<<endl;
}
