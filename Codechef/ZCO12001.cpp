/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,p1=1,M1=0,M=0,flag=0,pos=1,m=0;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int i=1;
    stack<int> s;
    while(i<=n)
    {
        if(a[i]==1)
        {
            M++;
            if(M>M1)
                M1=M,p1=i;
            s.push(i);
 
        }
        else
        {
            M--;
            if(m<i-s.top()+1)
            {
                //cout<<"i="<<i<<endl;
                m=i-s.top()+1;
                pos=s.top();
            }
            s.pop();
        }
        i++;
    }
    cout<<M1<<" "<<p1<<" "<<m<<" "<<pos<<endl;
} 