#include<iostream>
using namespace std;
int main()
{
	long n;
	static int count;
	cin>>n;
	if(n!=0){
	while(n>0 || n<0)
	{
		n=n/10;
		++count;
	}
	cout<<endl<<count; }
	else if(n==0)
	cout<<endl<<1; 
	return 0;
}
