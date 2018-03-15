/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
map<string,int> acc;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		acc.clear();
		int n;
		cin>>n;
		string s;
		getchar();
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			if(acc.find(s)!=acc.end())
				acc[s]+=1;
			else
				acc[s]=1;
		}
	for(map<string,int>::iterator i=acc.begin();i!=acc.end();i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
	}
}