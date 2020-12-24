#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num1,num2;
    cin>>num1;
    cin>>num2;
    char result[100];
    for(int i=num1.length()-1; i>=0; i--)
    {
        if(num1[i]=='1'&&num2[i]=='1')
        {
            result[i]='0';
        }
        else if((num1[i]=='0'&&num2[i]=='1')||(num1[i]=='1'&&num2[i]=='0'))
        {
            result[i]='1';
        }
        else
        {
            result[i]='0';
        }
    }
    for(int i=0; i<num1.length(); i++)
    {
        cout<<result[i];
    }
    return 0;
}
