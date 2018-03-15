/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include<iostream>
using namespace std;
//long long int time(int N,int b,int c,int a=0)
//{ if(N==a)    return 0;
//  if((N%2==0&&a==N/2)||(N%2!=0&&a==(N+1)/2))  return b+time(N-a,b,2*c);
//  return c+time(N,b,c,a+1);
//}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   long long int time=0;
        long long int N,B,M,a=0;
        cin>>N>>B>>M;
        while(N!=a)
        {
            if((N%2==0&&a==N/2)||(N%2!=0&&a==(N+1)/2))
            {
                time+=B;
                M*=2;
                N-=a;
                a=0;
                continue;
            }
            if(N%2==0)
            {
                time+=(N/2)*M;
                a=N/2;
            }
            else
            {
                time+=((N+1)/2)*M;
                a=(N+1)/2;
            }
        }
        cout<<time<<endl;
    }
} 