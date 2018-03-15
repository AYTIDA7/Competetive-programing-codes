/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int t,flag=1;
	do{
		cin>>t;
	if(t)
	{
		string str;
		cin>>str;
		int k=str.length()/t;
		char p[100][100];
		for(int i=0,l=0;i<k&&str[l]!=0;i++)
		{	if(i%2)
			for(int j=t-1;j>=0&&str[l]!=0;j--)
			{//	cout<<"j="<<j;
				p[i][j]=str[l++];
			}
			else
			for(int j=0;j<t;j++)
			{//	cout<<"j="<<j;
				p[i][j]=str[l++];
			}
			
	//	p[i][t]='\0';
	//cout<<t;
		}
		for(int j=0;j<t;j++)
		{
			for(int i=0;i<k;i++)
		{cout<<p[i][j];
			}	//cout<<endl;
	}cout<<endl;}
	else 
	flag=0;
	}while(flag);
	return 0;
}