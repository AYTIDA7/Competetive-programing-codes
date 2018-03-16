/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
    int t;
 
    cin>>t;
 
    while(t--)
 
    {
 
        string s;
 
        cin>>s;
 
        long long int trig=-1,count0=0,count1=0;
      long long int time=0;
 
        for(int i=0;i<s.length();i++)
 
        {
 
            if(trig==-1&&s[i]=='1')
 
            {
 
                trig=0;
 
                count1++;
 
            }
 
            else if(trig==0&&s[i]=='0')
 
            {
 
                trig=1;
 
                count0++;
 
            }
 
            else if(trig==1&&s[i]=='1')
 
            {
 
                time+=(count0+1)*count1;
 
                trig=0;
 
                count1++;
 
                count0=0;
 
            }
 
            else if(trig==0)
 
                count1++;
 
            else if(trig==1)
 
                count0++;
 
        }
 
        if(trig==1)
 
            time+=(count0+1)*count1;
 
        cout<<time<<endl;
 
    }
 
} 