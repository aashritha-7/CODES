#include<iostream>     //using prefix sum--- a=[2,3,4] then pref_sum = [2,5,7]
using namespace std;
int getsumar(int ps[],int l,int r)
{
    if (l!=0)
    return ps[r]-ps[l-1];
    else
    return ps[r];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ps[n];
    ps[0] = a[0];
    for(int i=1;i<n;i++)
    {
        ps[i] = ps[i-1] + a[i];
    }
    cout<<getsumar(ps , 1 , 3);
}
