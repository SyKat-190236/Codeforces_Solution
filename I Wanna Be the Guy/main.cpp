#include <bits/stdc++.h>

using namespace std;

bool chkp(int i,int lp[],int p)
{
    for(int j=0; j<p; j++)
    {
        if(i==lp[j])
            return true;
    }
    return false;
}

bool chkq(int i,int lq[],int q)
{
    for(int j=0; j<q; j++)
    {
        if(i==lq[j])
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    int lp[p];
    for(int i=0; i<p; i++)
    {
        cin>>lp[i];
    }
    cin>>q;
    int lq[q];
    for(int i=0; i<q; i++)
    {
        cin>>lq[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(chkp(i+1,lp,p)||chkq(i+1,lq,q))
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
