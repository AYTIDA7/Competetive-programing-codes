/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(1)
	{
	    cin>>n;
	    if(!n)  break;
	    int flag=1;
	    int *p=new int[n+1];
	    int *p1=new int[n+1];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>p[i];
	        p1[p[i]]=i;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if(p[i]!=p1[i]) 
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(!flag)    cout<<"not ambiguous\n";
	    else        cout<<"ambiguous\n";
	}
	return 0;
}
