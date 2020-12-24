#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    stack<int> s;
    int cnt=0;
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(s.empty()||s.top()<=p[i])
        {
            s.push(p[i]);
        }
        else
        {
            while(!s.empty())
            {
                cnt++;
                s.pop();
            }
            if(cnt>max)
            {
                max=cnt;
            }
            cnt=0;
            s.push(p[i]);
        }
    }
    if(!s.empty())
    {
            while(!s.empty())
            {
                cnt++;
                s.pop();
            }
            if(cnt>max)
            {
                max=cnt;
            }
    }
    cout<<max;
    return 0;
}
