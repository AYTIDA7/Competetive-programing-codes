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
        int n,sum1=0,sum2=0;
        cin>>n;
        int *x=new int[n],*y=new int[n];
        for(int i=0;i<n;i++)
            cin>>x[i];
        for(int i=0;i<n;i++)
            cin>>y[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum1+=x[i];
                sum2+=y[i];
            }
            else
            {
                sum1+=y[i];
                sum2+=x[i];
            }
        }
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
} 