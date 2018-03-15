/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float t;
	int flag=1;
	do
	{	
		cin>>t;
		if(t!=0.00)
		{
			float sum=0.00;
			int i=1;
			while(sum<t)
			{
				sum+=1.00/++i;
			}
			cout<<i-1<<" card(s)"<<endl;
		}
		else
		flag=0;
	}while(flag);
	return 0;
}