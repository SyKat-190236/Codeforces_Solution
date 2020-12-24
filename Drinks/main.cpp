#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    cin>>i;
    int p[i];
    for(int j=0; j<i; j++)
    {
        cin>>p[j];
    }
    int s=0;
    for(int j=0; j<i; j++)
    {
        s=s+p[j];
    }
    cout<<fixed<<setprecision(12)<<(double)s/i<<endl;
    return 0;
}
