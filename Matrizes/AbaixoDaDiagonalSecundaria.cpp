#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i,j;
	char sm;
	float m[12][12],somatorio=0;
	
	cin>>sm;
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cin>>m[i][j];
		}
	}
	int ajudinha=11;
	for(i=1;i<12;i++)
	{
		for(j=ajudinha;j<12;j++)
		{
			somatorio+=m[i][j];
		}
		ajudinha--;
	}
	cout<<fixed<<setprecision(1);
	if(sm=='S')
	{
		cout<<somatorio<<endl;
	}
	else
	{
		if(sm=='M')
		{
			cout<<somatorio/66.0<<endl;
		}
	}
}
