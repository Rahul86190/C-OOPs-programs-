#include<iostream>
using namespace std;
class hello{
	public:
		int kill(int a,int b)
		{
			
			return a+b;
		}
};
int main()
{
	hello s1;
	cout<<s1.kill(77,3)<<endl;
}
