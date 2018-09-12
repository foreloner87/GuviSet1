#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primecheck(int n)
{
	bool c[1001];
	memset(c,true,sizeof(c));
	for(int i=2;i<=1000;i++)
	if(c[i]==true)
	for(int j=i*2;j<=1000;j+=i)
	c[j]=false;
	if(c[n]==true && n>1)
	cout<<"Yes";
	else 
	cout<<"No";
}
int main()
{
	int n;
	cin>>n;
	if(cin){
	cout<<endl;
	primecheck(n); }
	else cout<<endl<<"Invalid";
	return 0;
}
