#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(isalpha(c))
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	cout<<endl<<"Vowel";
	else
	cout<<endl<<"Consonant";
	else
	cout<<"\nInvalid";
	return 0;
}
