/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c=0;
		cin>>a>>b;
		while(a&&b)
		{
			if(a==1&&b==1)
				break;
			if(a<b)
				swap(a,b);
			c++;
			a-=2;
			b--;
		}
		cout<<c<<endl;
	}

}