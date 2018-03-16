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
        int n;
        cin>>n;
        int *a=new int[2*n],*b=new int[2*n];
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        sort(a,a+2*n);
        int i=0,j=0;
        while(1)
        {
            b[j]=a[i];
            b[j+1]=a[n+i];
            j+=2;
            i++;
            if(i>=n)
                break;
        }
        cout<<b[n]<<endl;
        for(int i=0;i<2*n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
 
 
} 