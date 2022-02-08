#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        int even[n],odd[n];
        int e=0,o=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]%2==0)
            {
                even[e]=a[j];
                e++;
            }
            else
            {
                odd[o]=a[j];
                o++;
            }
        }
        for(int k=0; k<o; k++)
        {
            cout<<odd[k]<<" ";
        }
        for(int k=0; k<e; k++)
        {
            cout<<even[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
