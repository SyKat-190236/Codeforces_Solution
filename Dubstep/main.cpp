#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin>> input;
    int space = 0;
    for(int i=0; i<input.length();)
    {
        if(input[i]=='W'&&input[i+1]=='U'&&input[i+2]=='B')
        {
            if(space==1)
            {
                cout<<" ";
                space=0;
            }
            i=i+3;
        }
        else
        {
            cout<<input[i];
            space=1;
            i++;
        }
    }
    return 0;
}
