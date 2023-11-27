#include<iostream>
using namespace std;
class hello{
	private:
		int a;
	protected:
		int b;
	public:
		hello()
		{
		
		a=23;
		b=34;
	}
	friend class f;
};
class f{
	public:
		void hy(hello& ss)
		
		{
			cout<<"this is private value "<<ss.a<<endl;
			cout<<"this is protected value "<<ss.b<<endl;
		}
};
int main()
{
	hello s1;
	f s2;
	s2.hy(s1);
}
