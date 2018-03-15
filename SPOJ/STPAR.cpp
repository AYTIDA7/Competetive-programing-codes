/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
void parade(int a[],int n)
{
	queue<int> q;
	stack<int> s;
	int j=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==j)
		{	
			q.push(a[i]);
			j++;
		}
		else if(s.empty()==0&&s.top()==j)
		{
			q.push(s.top());
			s.pop();
			j++;
			i--;
		}
		else
		{
			s.push(a[i]);
		}
	}
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
	int i=q.front();
	
	while(q.front()!=q.back())
	{
		q.pop();
		int j=q.front();
		if(j-i>1)
		{
			cout<<"no"<<endl;
			return;
		}
		i=j;
	}
	cout<<"yes"<<endl;
	
}
int main()
{
	int t=1;
	while(t)
	{
		cin>>t;
		if(t==0)	break;
		int *a=new int[t];
		for(int i=0;i<t;i++)
			cin>>a[i];
		parade(a,t);
		
	}
}