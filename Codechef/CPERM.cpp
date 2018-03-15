/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    long long int n,i=2,f=2;
    cin>>n;
    n-=1;
    if(n)   f=1;
    while(n)
    {
        n%=1000000007;
        if(n%2)
        {
            f=(f*i)%1000000007;
            
        }
        n/=2;
        i=(i*i)%1000000007;
    }
    cout<<f-2<<endl;
    }            
    return 0;
} 