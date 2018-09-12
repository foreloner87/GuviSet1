#include<iostream>
#include<math.h>
using namespace std;
int order(int n)
{ 
int x=0;
while(n){
	x++;
	n/=10;}
	return x;
}
int main()
{
	int n,o,t,r=0,s=0;
	cin>>n;
	if(cin)
	{ 
	t=n; 
	o=order(n);
	while(n)
	{
		r=n%10;
		n/=10;
		s= s + pow(r,o);
	}
	if(s==t) cout<<endl<<"Yes";
	else cout<<endl<<"No";
	}
	else cout<<endl<<"Invalid";
	return 0;
}
