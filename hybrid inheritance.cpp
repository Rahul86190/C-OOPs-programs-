#include<iostream>
using namespace std;
class hello{
	protected:
		
		int a;
		public:
			void hi()
			{
				cout<<"enter 1st digit"<<endl;
				cin >>a;
			}
};
class hello2:public hello{
	protected:
		int b;
		public:
			void hi2()
			{
				cout<<"enter 2nd digit"<<endl;
				cin>>b;
			}
			
};
class hello3 {
	protected:
		int c;
		public:
			void hi3()
			{
				cout<<"enter 3rd digit"<<endl;
				cin>>c;
			}
};
class hello4:public hello2, public hello3{
	public:
		void hi4()
		{
			hi();
			hi2();
			hi3();
			cout<<"this is  addition of digits "<<a+b+c<<endl;
		}
};
int main()
{
	hello4 H;
	H.hi4();
}
		
