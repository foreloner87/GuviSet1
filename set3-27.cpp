#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	string s; int c=0;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	if(isalpha(s[i]))
	++c;
	if(c==0)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
