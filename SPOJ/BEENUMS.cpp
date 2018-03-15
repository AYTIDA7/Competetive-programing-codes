/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    while(1)
    {
        cin>>t;
        if(t==-1)  break;
        long double k=(-3+sqrt(9+12*(t-1)))/6;
        if(floor(k)==k)     cout<<"Y\n";
        else                cout<<"N\n";
    }
    return 0;
}