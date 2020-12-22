#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int n,i,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    int sec;
    for(i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
    }
    //second highest
    for(i=0;i<n;i++)
    {
        if (max > a[i])
        {
             sec = a[i];
        }
    }
    cout<<min<<" "<<max<<" "<<sec;
    return 0;
}
