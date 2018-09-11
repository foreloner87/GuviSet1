#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(isalpha(c))
	cout<<"\nAlphabet";
	else cout<<"\nNo";
	return 0;
}
