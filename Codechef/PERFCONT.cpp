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
        int n,p;
        int c=0,h=0;
        cin>>n>>p;
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=p/10)
                h++;
            else if(a[i]>=p/2)
                c++;
        }
        if(c==1&&h==2)
            cout<<"yes\n";
        else
            cout<<"no\n";
        
    }
} 