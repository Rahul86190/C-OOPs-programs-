#include<iostream>
using namespace std;
int main()
{
	int *arr = new int[33];
	arr[1]=55;
	arr[2]=66;
	cout<<arr[2]<<" "<<arr[1]<<endl;
	delete arr ;
	cout<<arr[1]<<endl; //here the memory is deallocated so it takes garbage value
	
}
