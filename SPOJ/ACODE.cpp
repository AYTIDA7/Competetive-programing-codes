/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<string.h>
#include<map>
using namespace std;
map <long long int,long long int> a;
long long int rec(char str[],int i=0)
{	
	if(i>=strlen(str)-1&&str[i]!=48)	return 1;
	if(a.find(i)!=a.end())
	return a[i];
	int t;
	{
	if(str[i]!=48) t=rec(str,i+1);
	else
		t=0;
	//	cout<<"t1="<<t<<endl;
	}
	int k=(str[i]-48)*10,o=(str[i+1]-48);
	int s=k+o;
	//cout<<s<<endl;
	if(s>0&&s<=26 && str[i]!='0') 
	{
	//	cout<<"check1    "<<rec(str,i+1)+rec(str,i+2)<<"\n";
		t+=rec(str,i+2);
	}
	//cout<<"t="<<t<<endl;
	a[i]=t;
	return t;
}
int main()
{
	
	while(1)
	{      a.clear();
		char str[6000];
		cin>>str;
		if(str[0]==48)	break;
		cout<<rec(str)<<endl;
	//	for(map<long long int,long long int>::iterator i=a.begin();i!=a.end();i++)
	//	cout<< i->second;
	}
	return 0;
}