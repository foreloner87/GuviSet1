#include<iostream>
using namespace std;
int main()
{
	int n,t=0,r=0,s;
	cin>>n;
	if(cin)
	{ s=n;
	while(n>0)
	{   r=n%10;
		n/=10; // 
		t= r + t*10;
	}
	if(s==t) cout<<endl<<"Yes";
	else cout<<endl<<"No";
	}
	else cout<<endl<<"Invalid";
	return 0;
}
