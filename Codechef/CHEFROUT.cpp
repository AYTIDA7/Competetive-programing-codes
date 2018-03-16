/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c=s[0];
        int flag=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]<c)
            {
                cout<<"no\n";
                flag=1;
            }
            else
                c=s[i];
            if(flag)
                break;
        }
        if(!flag)
            cout<<"yes\n";
    }
} 