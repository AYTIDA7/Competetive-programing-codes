/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
void satisfy(string S,int x,int y)
{
    int no_a=0,no_b=0;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='a')   no_a++;
        else            no_b++; 
    }
    int i=0;
    string s="";
    if(no_a>no_b)
        while(no_a&&no_b)
        {
            if(i==0)
            {
                s+='a';
                no_a--;
                i=1-i;
            }
            else
            {
                s+='b';
                no_b--;
                i=1-i;
            }
        }
    else
        while(no_a&&no_b)
        {
            if(i==1)
            {
                s+='a';
                no_a--;
                i=1-i;
            }
            else
            {
                s+='b';
                no_b--;
                i=1-i;
            }
        }
    //cout<<no_a<<" "<<no_b<<endl;
    string final;
    if(no_a)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                int i=1;
                while(x>i&&no_a)
                    final+='a',no_a--,i++;
            }
            final+=s[i];
        }
        //cout<<s<<" "<<final<<endl;
        int a1=0,i=final.length()-1;
        while(final[i]!='b'&&no_a&&i>=0)
            a1++,i--;
        while(no_a)
        {
            if(a1<x)
            {
                final+='a';
                no_a--;
                a1++;
            }
            else
            {
                final+="*a";
                no_a--;
                a1=1;
            }
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                int i=1;
                while(y>i&&no_b)
                    final+='b',no_b--,i++;
            }
            final+=s[i];
        }
        //cout<<s<<" "<<final<<endl;
        int a1=0,i=final.length()-1;
        while(final[i]!='a'&&no_b&&i>=0)
            a1++,i--;
        while(no_b)
        {
            if(a1<y)
            {
                final+='b';
                no_b--;
                a1++;
            }
            else
            {
                final+="*b";
                no_b--;
                a1=1;
            }
        }
    }
    cout<<final<<endl;
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x,y;
        cin>>x>>y;
        satisfy(s,x,y);
    }
} 