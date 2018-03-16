/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
unsigned long int lim=4294967295;
#define MX 4294900000
vector <unsigned int> v;
void findVal(int n)
{
    long long int k=(lim-MX)/(n-42949);
    for(int i=0;i<42949;i++)
        v.push_back(100000);
    //v.push_back(10000);
    //cout<<(((lim-MX)-(k*(n-42949)))/2)<<" ";
    v.push_back(((lim-MX)-(k*(n-42949)))/2);
    for(int i=42950;i<n;i++)
    {
        v.push_back(k);
        //cout<<k<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        int n;
        cin>>n;
        findVal(n);
        //cout<<v.size()<<endl;
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
} 