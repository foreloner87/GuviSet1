#include<iostream>
using namespace std;
int main()
{
	long n;
	cin>>n;
	if(n>0)
	cout<<"\nPositive";
	else if(n==0)
	cout<<"\nZero";
	else if(n<0)
	cout<<"\nNegative";
	return 0;
}
