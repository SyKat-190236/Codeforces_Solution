#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n;
    int d;
    cin>>k>>l>>m>>n;
    cin>>d;
    int c=0;
    for(int i=1; i<=d; i++)
    {
        if(i%k==0)
        {
            c++;
        }
        else if(i%l==0)
        {
            c++;
        }
        else if(i%m==0)
        {
            c++;
        }
        else if(i%n==0)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
