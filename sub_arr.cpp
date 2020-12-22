#include <bits/stdc++.h> 
bool isSubset(int arr1[], int arr2[], 
			int n, int m) 
{ 
	int i = 0; 
	int j = 0; 
	for (i = 0; i < n; i++) 
	{ 
		for (j = 0; j < m; j++) 
		{ 
			if (arr2[j] == arr1[i]) 
				break; 
		} 
		if (j == n) 
			return 0; 
	} 
	return 1; 
} 
using namespace std;
int main() 
{ 
    int n,m,i;
	int a1[10],a2[10];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int j =0;j<n;j++)
    {
        cin>>a2[j];
    }
	if (isSubset(a1, a2, n, m)) 
		cout<<"subset"; 
	else
		cout<<"not a subset"; 
	return 0; 
} 

