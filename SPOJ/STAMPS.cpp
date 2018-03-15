/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,j=1;
	cin>>t;
	while(t--)
	{
	int a,b,sum=0,k=0,flag=1;
	cin>>a>>b;
	int *p=new int[b];
	for(int i=0;i<b;i++)
		cin>>p[i];
	sort(p,p+b);
	for(int i=b-1;i>=0;i--,k++)
	{	
		sum+=p[i];
		if(sum>=a)	
		{
			flag=0;
			break;
		}
	}
	if(!flag)
	cout<<"Scenario #"<<j++<<":\n"<<k+1<<endl<<endl;
	else
	cout<<"Scenario #"<<j++<<":\nimpossible"<<endl<<endl;
	}
	return 0;
}