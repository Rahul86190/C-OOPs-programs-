#include<iostream>
using namespace std;
class hello{
	public:
		int side;
		void squa(int side);
		void pera(int side);
};
void hello::squa(int side)
{
	cout<<"square is "<<side*side<<endl; 
}
void hello::pera(int side)
{
	cout<<"perameter is "<<4*side<<endl;
}
int main()
{
	hello s1;
	cout<<"enter a value"<<endl;
	cin>>s1.side;
	s1.squa(s1.side);
	s1.pera(s1.side);
}
