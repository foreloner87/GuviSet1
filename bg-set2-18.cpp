#include<iostream>
using namespace std;
int main()
{
	int n1,n2,c=0;
	cin>>n1>>n2;
	for(int i=n1+1;i<n2;i++)
	{
		int sum=0,rem=0,r=i;
		while(r>0)
		{
			rem=r%10;
			r=r/10;
			sum+=(rem*rem*rem);
		}
	if(sum==i)
	{
		++c;
		if(c>1)
			cout<<' ';
		cout<<i;
	}
	}
	return 0;
}
