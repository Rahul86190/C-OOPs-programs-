#include<iostream>
using namespace std;
void exit();

 class interface{
 	public:
 	int now1()
		{
			string s;
			cout<<"\nWelcome TO SBI BANK \n"<<endl;
			int m=5000;
			while(1)
			{
				int z,y;
				string v;
				cout<<"Press 1 for Withdraw money"<<endl;
				cout<<"Press 2 for Deposite money"<<endl;
				cout<<"Press 3 for Balance Inquiry"<<endl;
				cout<<"Press 4 to QUIT"<<endl;
				cin>>z;
				switch(z)
				{
					case 1: cout <<"Enter amount to withdraw"<<endl;
							cin>>y;
							if(y>m)
							{
								cout<<"Insufficient Balance\n"<<endl;
							}
							else{
								m=m-y;
								cout<<"\nMoney successfully withdrawl.....\nColleck money from below box\n\nnow availabe balannce is "<<m<<"\n"<<endl;}
							break;
					case 2: cout <<"Enter amount to deposite in account (LIMIT 1000000 ...( 10 lakh))"<<endl;
							cin>>y;
							m=m+y;
							cout<<"\n Money successfully deposited in your account.....\nnow total balannce is "<<m<<"\n"<<endl;
							break;
					case 3: 
								cout<<"Welcome....Your updated balance is "<<m<<"\n"<<endl;
								break;
							
							
					case 4:
							{
								
								cout<<"HAVE A GOOD DAY \n........QUITING............"<<endl;
								exit();
							}
				}
			}
		}
		
		int now2()
		{
				string s;
			cout<<"\nSBI BANK main aapka swagat hain !!!!! \n"<<endl;
			int m=5000;
			while(1)
			{
				int z,y;
				string v;
				cout<<"Paise nikalne ke liye 1 Dabaye"<<endl;
				cout<<"Paise jama krne ke liye 2 Dabaye"<<endl;
				cout<<"Khate ki janch ke liye 3 Dabaye"<<endl;
				cout<<"Prakriya Band krne ke liye 4 Dabaye"<<endl;
				cin>>z;
				switch(z)
				{
					case 1: cout <<"Aap kitne paise nikalna chahte h ?"<<endl;
							cin>>y;
							if(y>m)
							{
								cout<<"Aapke khate main itne paise nhi h !!!!!!\n"<<endl;
							}
							else{
							
								m=m-y;
								cout<<"\nPaise nikale gaye .....\nNiche diye box se paise prapt kre\n\nShesh rashi (bache hue pasie)  "<<m<<"\n"<<endl;
								}
							break;
					case 2: cout <<"Aap kitne paise jama krna chahte hain ? (adhiktam seema 10 lakh)"<<endl;
							cin>>y;
							m=m+y;
							cout<<"\nPaise jama kiye gaye.....\nKul rashi (pure paise )"<<m<<"\n"<<endl;
							break;
					case 3: cout<<"swagat hain....Bank khate main aapki kul rashi  "<<m<<"\n"<<endl;
							break;	
					case 4:
							cout<<"AAPKA DIN SHUBH HO \n........BAHAR JA RHE H ............"<<endl;
								exit();
						}
				}
		}
 };
 void exit()
 {
 	exit();
 }
 int main()
 {
	interface b1;
 	string a,b,c,d,e,s;
	int f,g,h,i,j;
	int q,p,T;
 		a="rahul";
		f=5000; //passwords
		b="mina";
		g=7000;
		c="nini";
		h=4000;
		d="lalu";
		i=9000;
		e="rajpal";
		j=11000;
		
		cout<<"Press 1 for English and 2 for Hindi \n( English ke liye 1 dabaye or hindi ke liye 2 dabaye)"<<endl;
		cin>>T;
		if(T==1){
				cout<<"Press 1 for login\n\nAnd Press any other number to exit"<<endl;
				cin>>q;
			
			if (q==1)
			{
			cout<<"Please enter username "<<endl;
			cin>>s;
			cout<<"Entre your password"<<endl;
			cin>>p;
				if (s==a && p==f)
					{
						b1.now1();
					}
					else if (s==b && p==g)
					{
						b1.now1();
					}
					else if (s==c && p==h)
					{
						b1.now1();
					}
					else if (s==d && p==i)
					{
						b1.now1();
					}
					else if(s==e && p==j)
					{
						b1.now1();
					}
				else {
					cout<<"Enter valid choise"<<endl;
					}
			}
			else{
			cout<<"Exiting......"<<endl;
			exit();
			}
		}
		else if(T==2)
		{
			cout<<"Login Ke liye 1 dabaye\n\nBahar niklne ke liye koi anya chunav kre (  1 to chhod kr) "<<endl;
			cin>>q;
			if(q==1)
			{
			cout<<"Apna naam yaha likhe  "<<endl;
			cin>>s;
			cout<<"Kripya aapka password daale"<<endl;
			cin>>p;
			
			if (s==a && p==f)
			{
				b1.now2();
			}
			else if (s==b && p==g)
			{
				b1.now2();
			}
			else if (s==c && p==h)
			{
				b1.now2();
			}
			else if (s==d && p==i)
			{
				b1.now2();
			}
			else if(s==e && p==j)
			{
				b1.now2();
			}
			else {
			cout<<"Kripya sahi jankari daale"<<endl;
			}
		}
		else{
			cout<<"Bahar ho rhe h ......"<<endl;
			exit();
		}			
	}
	else {
		cout<<"kripya shi chunav kare"<<endl;
	}		
 }
