#include<iostream>
using namespace std;
int main()
{
	long n,sum=0;
	cin>>n;
	int a[n],d;
	cin>>d;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<d;i++)
	sum+=a[i];
	cout<<endl<<sum;
	return 0;
	
}
