#include<iostream>
using namespace std;
long max(long a,long b,long c)
{
	return ((a>b)?((a>c)?a:c):((b>c)?b:c));
}
int main()
{
	long a,b,c;
	cin>>a>>b>>c;
	cout<<endl<<max(a,b,c);
	return 0;
}
