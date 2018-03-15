/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t,sum=0,count=0,flag=0;
	cin>>t;
	int t1=t;
	map <int,int> a;
	a.clear();
	while(1)
	{	
		if(a.find(t1)!=a.end())	break;
		sum+=(t%10)*(t%10);
		t/=10;
		//cout<<t<<" ";
		if(t==0)
		{//	cout<<sum<<"\n";
			if(sum==1)
			{	count++;
				flag=1;
				break;
			}
			else
			{	count++;
				a[t1]=t1;
				t=t1=sum;
				sum=0;
			}
		}
	}
	if(flag)	cout<<count<<endl;
	else		cout<<"-1"<<endl;
	return 0;
}