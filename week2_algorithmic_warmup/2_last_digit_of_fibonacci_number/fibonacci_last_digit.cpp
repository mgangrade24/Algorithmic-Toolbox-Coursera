#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long ar[n+2];
	ar[0]=0;
	ar[1]=1;
	
	if(n==0)
	cout<<0;
	
	else if(n==1)
	cout<<1;
	
	else if(n<=60)
	{
		for(int i=2;i<=n;i++)
		{
			ar[i]=ar[i-1]+ar[i-2];
		}
		//cout<<ar[n]<<endl;
		cout<<ar[n]%10;
	}
	else
	{
		for(int i=2;i<=n;i++)
		{
			ar[i]=ar[i-1]+ar[i-2];
		}
		//cout<<ar[n]<<endl;
		cout<<ar[n%60]%10;	
	}
}
