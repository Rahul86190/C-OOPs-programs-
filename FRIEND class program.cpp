#include<iostream>
using namespace std;
class hello{
	private:
		int billo(){
		
		int a=10;
		cout<<"a square is "<<(a*a)<<endl;}
	protected:
		int killo (){
		int b=3;
		cout<<"b square is "<<b*b<<endl;}
	public:
		friend class c;
};
class c{
	public:
	void hy(hello& ss)
	{
		ss.billo();
		ss.killo();
	}
};
int main()
{
	hello s1;
	c s2;
	s2.hy(s1);
}
