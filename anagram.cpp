#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
   int hash[26] = {0};
   int f;
    for(int i=0;i<s1.length();i++)
    {
        hash[s1[i] - 'a']++;
        hash[s2[i] - 'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if (hash[i]==0)
        {
            f=1;
        }
        else
        {
          f=0;
          break;
        }
    }
    if(f==1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
