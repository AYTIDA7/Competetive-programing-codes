/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
map<string,int> item;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        item.clear();
        string s[4];
        for(int i=0;i<4;i++)
        {
            cin>>s[i];
            item[s[i]]=1;
        }
        for(int i=0;i<4;i++)
        {
            cin>>s[i];
            if(item.find(s[i])!=item.end())
                item[s[i]]++;
        }
        int c=0,f=0;
        for(map<string,int>::iterator i=item.begin();i!=item.end();i++)
        {
            if(i->second>1)
                c++;
            if(c>=2)
            {
                f=1;
                break;
            }
        }
        if(f)   cout<<"similar\n";
        else
                cout<<"dissimilar\n";
    }
} 