#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int even=0,odd=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]%2==0)
        {
            even++;
        }
    }
    odd=n-even;
    if(even>odd)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}
