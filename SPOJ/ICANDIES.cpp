/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x=1;
	cin>>t;
	while(t--)
	{
		int n,i=1,flag=1;
		cin>>n;
		while(flag&&(n-5*i)>0)
		{
				if(((n-5*i)%3)==0)
				{	
					flag=0;
					cout<<"Case "<<x++<<": "<<n-5*i<<endl;
				}
				else
					i++;
			
		}
		if(flag)	cout<<"Case "<<x++<<": "<<-1<<endl;
	}
	return 0;
}