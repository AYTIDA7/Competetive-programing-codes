/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	// your code here
    int t;
    cin>>t;
    while(t--)
    {
        long long int a3,an3,sum,n,a,d;
        cin>>a3>>an3>>sum;
        n=2*sum/(a3+an3);
        d=(an3-a3)/(n-5);
        a=a3-2*d;
        cout<<n<<endl;
        for(long long int i=0;i<n;i++)
            cout<<a+i*d<<" ";
        cout<<endl;
        
    }
    return 0;
        
        
    }