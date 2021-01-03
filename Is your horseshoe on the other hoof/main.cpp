#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s[4],cnt=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(s[i]==s[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}
