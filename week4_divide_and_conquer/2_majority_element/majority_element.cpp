#include <bits/stdc++.h>

using namespace std;

int MaxRepertingElement(int* array, int n) 
{ 
    // Insert all elements in hash. 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[array[i]]++; 
  
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
}

/* if x is present in arr[] then returns the count 
    of occurrences of x, otherwise returns 0. */
int count(int* array, int x, int n) 
{     
  /* get the index of first occurrence of x */
  int *low = lower_bound(array, array+n, x); 
  
  // If element is not present, return 0 
  if (low == (array + n) || *low != x) 
     return 0; 
     
  /* Else get the index of last occurrence of x. 
     Note that we  are only looking in the  
     subarray after first occurrence */   
  int *high = upper_bound(low, array+n, x);      
     
  /* return count */
  return high - low; 
}

//Main function
int main()
{
	int n;
	cin>>n;
	int input_array[n];
	for(int i=0;i<n;i++)
	cin>>input_array[i];
	int max=MaxRepertingElement(input_array, n);
	int counting=count(input_array, max, n);
//	if(counting>n/2)
//	cout<<1;
//	else
//	cout<<0;
	cout<<max<<endl;
	cout<<counting;
	return 0;
}
