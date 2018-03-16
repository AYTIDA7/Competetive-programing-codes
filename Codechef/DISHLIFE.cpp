/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
map<int,int> a;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        a.clear();
        int n,k,f,i,f2=1,flag=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>f;
            int flag2=0;
            int *ar=new int[f];
            for(int j=0;j<f;j++)
            {
                cin>>ar[j];
                if(a.find(ar[j])==a.end())
                {       flag2=1;
                        a[ar[j]]=i+1;
                }
            }
            if(!flag2)
            {
                f2=0;
            }
            if(a.size()==k)
            {
                flag=1;
            }
        }
        if(flag)
        {
            if(f2)
                cout<<"all\n";
            else
                cout<<"some\n";
        }
        else
            cout<<"sad\n";
    }
}
 