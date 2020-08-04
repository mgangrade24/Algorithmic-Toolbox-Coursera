#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,x;
	cin>>n;
	x=n/10;
	x=x+((n%10)/5);
	x=x+(n%5);
	cout<<x;
}
