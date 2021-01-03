#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ip[n][15];
    for(int i=0; i<n; i++)
    {
        cin>>ip[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(ip[i][0]=='T')
        {
            cnt+=4;
        }
        else if(ip[i][0]=='C')
        {
            cnt+=6;
        }
        else if(ip[i][0]=='O')
        {
            cnt+=8;
        }
        else if(ip[i][0]=='D')
        {
            cnt+=12;
        }
        else if(ip[i][0]=='I')
        {
            cnt+=20;
        }
    }
    cout<<cnt;
    return 0;
}
