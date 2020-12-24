#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long result;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            result=2*(k-1)+1;
        }
        else
        {
            k = k - n/2;
            result=2*k;
        }
    }
    else
    {
        if(k<=n/2+1)
        {
            result=2*(k-1)+1;
        }
        else
        {
            k = k - n/2 -1;
            result=2*k;
        }
    }
    cout<<result;
    return 0;
}
