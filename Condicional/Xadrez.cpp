#include <iostream>

using namespace std;

int main ()
{
	int l,c;
	
	cin>>l>>c;
	
	if(l%2==0 && c%2==0)
	{
		cout<<"1\n";
	}
	if(l%2!=0 && c%2==0)
	{
		cout<<"0\n";
	}
	if(l%2==0 && c%2!=0)
	{
		cout<<"0\n";
	}
	if(l%2!=0 && c%2!=0)
	{
		cout<<"1\n";
	}
}
