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
    int max,min;
    int big=0,small=0;
    max=s[0];
    min=s[0];
    for(int i=0; i<n; i++)
    {
        if(s[i]>max)
        {
            max=s[i];
            big=i;
        }
        if(s[i]<=min)
        {
            min=s[i];
            small=i;
        }
    }
    int result=0;
    if(small>big)
    {
        result=n-1-small+big;
        cout<<result;
    }
    else
    {
        result=n-2-small+big;
        cout<<result;
    }
    return 0;
}
