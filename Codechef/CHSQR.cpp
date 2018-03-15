/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[500][500];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {   if(i>j)
            {
                if(i-j==n/2)    a[i][j]=1;
                else if(i-j==n-1)   a[i][j]=n/2+1;
                else
                    a[i][j]=n-(i-j);
                
            }
            else if(j>i)
            {
                if(j-i==(n+1)/2)    a[i][j]=1;
                else if(j-i==1)     a[i][j]=n/2+1;
                else                a[i][j]=j-i;
            }
            else    a[i][j]=n;
           
          } for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    cout<<a[i][j]<<" ";
                    cout<<endl;
                    
                }
    }
                
    return 0;
} 