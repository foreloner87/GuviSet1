#include<iostream>
using namespace std;
int main()
{
	long n1,n2;
	cin>>n1;
	if(cin)
	cin>>n2;
	if(cin){
	cout<<endl;
	for(int i=n1+1;i<n2;i++)
	if(i%2!=0)
	cout<<i<<' ';
	}
	else
	cout<<endl<<"Invalid";
}
