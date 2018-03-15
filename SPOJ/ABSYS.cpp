/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b,e;
	    char c,d;
	    int A=0,B=0,E=0,i=0;
	    cin>>a>>c>>b>>d>>e;
	    if(a.find("machula")!=a.npos)
	    {
	        while(i<b.length()||i<e.length())
	        {
	         //   cout<<"t1\n";
	            if(i<b.length())    B=B*10+(b[i]-48);
	            if(i<e.length())    E=E*10+(e[i]-48);
	            i++;
	            
	        }
	    
	        A=E-B;
	        
	    }
	    
	    else if(b.find("machula")!=b.npos)
	    {
             while(i<a.length()||i<e.length())
	        {   //cout<<"t2\n";
	            if(i<a.length())    A=A*10+(a[i]-48);
	            if(i<e.length())    E=E*10+(e[i]-48);
	            i++;
	        }
	        B=E-A;
	    }
	    else
	   {
	       while(i<b.length()||i<a.length())
	        {  // cout<<"t3\n";
	            if(i<b.length())    B=B*10+(b[i]-48);
	            if(i<a.length())    A=A*10+(a[i]-48);
	            i++;
	        }
	        E=A+B;
        
	    }
	    cout<<A<<" + "<<B<<" = "<<E<<endl;
	}
	return 0;
}
