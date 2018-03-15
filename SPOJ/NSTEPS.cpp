/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
using namespace std;
int find_no(int x,int y)
{
	if(x!=y&&x!=y+2)	return -1;
	if(x%2==0&&y%2==0)	return x+y;
	else	return x+y-1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int z=find_no(x,y);
		if(z!=-1)	cout<<z<<endl;
		else		cout<<"No Number"<<endl;
	}
	return 0;
}