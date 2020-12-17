#include<iostream>                    //counterclock-wise
using namespace std;
void rev(int a[],int l ,int h)
{
    while(l<h)
    {
        int t;
        t = a[l];
        a[l] = a[h];
        a[h] = t;
        l++;
        h--;
    }
}
int print(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n , d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr , 0 , d-1);
    rev(arr , d , n-1);
    rev(arr , 0 , n-1);
    print(arr , n);
}
