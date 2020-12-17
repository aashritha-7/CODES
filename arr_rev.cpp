#include<iostream>
using namespace std;
void rev(int a[] ,int low , int high)
{
    int i;
    while(low<high)
        {
        int t;
        t = a[low];
        a[low] = a[high];
        a[high] = t;
        low++;
        high--;
        }
}
int print(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rev(a , 0 , n-1);
    print(a , n);
    return 0;
}
