#include<iostream>
using namespace std;
int poweroftwo(int x)
{
 return (x&&(!(x&x-1)));
}
int main()
{
    int n;
    cin>>n;
    cout<<poweroftwo(n);
    
}
