/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
bool binarySearch(string s[],int low,int high,string s1)
{
    if(low==high)
        return s[low]==s1?true:false;
    if(low>high)
        return false;
    int mid=(low+high)/2;
    return binarySearch(s,low,mid,s1)+binarySearch(s,mid+1,high,s1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string *s=new string[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        if(n<5)
        {   cout<<"No\n";
            continue;
        }
        if(binarySearch(s,0,n-1,"easy")==0)
        {   flag++;
            cout<<"No\n";
            continue;
        }
        if(binarySearch(s,0,n-1,"cakewalk")==0)
        {
            flag++;
            cout<<"No\n";
            continue;
        }
        if(binarySearch(s,0,n-1,"simple")==0)
        {
            flag++;
            cout<<"No\n";
            continue;
        }
        if(binarySearch(s,0,n-1,"easy-medium")==0&&binarySearch(s,0,n-1,"medium")==0)
        {
            flag++;
            cout<<"No\n";
            continue;
        }
        if(binarySearch(s,0,n-1,"medium-hard")==0&&binarySearch(s,0,n-1,"hard")==0)
        {
            flag++;
            cout<<"No\n";
            continue;
        }   
        if(flag!=5)
            cout<<"Yes\n";
 
    }
}    