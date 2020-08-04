#include <bits/stdc++.h>
using namespace std;



int main()
{
	int dist,tank,stop;
	cin>>dist;
	cin>>tank;
	cin>>stop;
	int ar[stop];
	for(int i=0;i<stop;i++)
	cin>>ar[i];
	
    int numRefill=0;
    int currentRefill=0;
    int lastRefill=0;
    
    while(currentRefill<=stop)
    {
    	lastRefill=currentRefill;
    	while(currentRefill<=stop && ar[currentRefill+1]-ar[lastRefill] <=tank)
    	{
    		currentRefill++;
    		if(currentRefill==lastRefill)
    		cout<<-1;
    		if(currentRefill<=stop)
    		numRefill++;
		}
		cout<<numRefill;
		return 0;
	}
    return -1;
	
	
}
