/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> a(n); 
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    long long int m=-9999999999999999;
    for(vector<long long int>::iterator i=a.end()-1;i>=a.begin();)
    {
        vector <long long int>::iterator j=lower_bound(a.begin(),a.end(),*i);
        m=max(m,(*i)*(long long int)(a.size()-(j-a.begin())));
        i=j-1;
    }
    cout<<m<<endl;
}  