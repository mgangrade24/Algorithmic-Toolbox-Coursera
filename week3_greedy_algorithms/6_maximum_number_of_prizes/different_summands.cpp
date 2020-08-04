#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> summands;
	int i=1;
	while(i==n)
	{
		if(i*2>=n)
		summands.push_back(i);
		
		else
		{
			summands.push_back(i);
			n--;
			i++;
		}
	}
	cout<<summands.size()<<endl;
	for(int j=0;j<summands.size();j++)
		cout<<summands[j]<<" ";
}
