#include <bits/stdc++.h>

using namespace std;

int src(int a, int b[], int n)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a==b[i])
            cnt++;
    }
    return cnt++;
}

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(src(a[i],b,n)>0)
        {
            cnt+=src(a[i],b,n);
        }
    }
    cout<<cnt;
    return 0;
}
