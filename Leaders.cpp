#include<iostream>
using namespace std;
int max(int a[] , int n)
{
    int max = a[n-1];
    cout<<max<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(max<=a[i])
        {
            max = a[i];
            cout<<max<<" ";
        }
    }
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
    max(a,n);
}
