#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int ar[n+2];
	ar[0]=0;
	ar[1]=1;
	
	if(n==0)
	cout<<0;
	
	else if(n==1)
	cout<<1;
	
	else
	{
		for(int i=2;i<=n;i++)
		{
		ar[i]=ar[i-1]+ar[i-2];
		}
		cout<<ar[n];
	}
}
