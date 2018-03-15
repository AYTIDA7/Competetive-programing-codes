/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(cin>>t)
	{	if(t==-1)	break;
		int *a=new int[t];
		float sum=0;
		int count=0;
		for(int i=0;i<t;i++)
		{	
			cin>>a[i];
			sum+=a[i];
		}
		float avg=sum/t;
		if(floor(avg)==avg)
		{
			int temp=0;
			sort(a,a+t);
			for(int i=t-1;i>=0;i--)
			{
				if(a[i]>avg)	{temp+=a[i]-avg;a[i]=avg;}
				else			{count+=avg-a[i];temp-=avg-a[i];a[i]=avg;}
			}
		cout<<count<<endl;
		}
		else
		cout<<"-1"<<endl;
	}
	return 0;
}