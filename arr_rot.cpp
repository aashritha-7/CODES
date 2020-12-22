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
    cin>>k;
    //lEFT ROTATION
    for(i=0;i<n;i++)
    {
        cout<<a[(i+k+1)%n];
    }
    // RIGHT ROTATION
    for(i=0;i<n;i++)
    {
        cout<<a[(i+k+1)%n];
    }
    return 0;
}
