#include<iostream>
using namespace std;
class father{
	public:
		int F=100;
		void parent()
		{
			
			cout<<"This is fathers property "<<F<<endl;
		}
};
class son1:public father{
	public:
		int S1=40;
		void child1()
		{
			cout<<"This is first child property \n"<<S1<<endl;
			
		}
};
class son2:public father{
	public:
		int S2=60;
		void child2()
		{
			cout<<"This is second child property "<<S2<<endl;
			
		}
};
int main()
{
	son1 S;
	S.parent();
	S.child1();
	
	son2 SS;
	SS.parent();
	SS.child2();
}

