/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<string.h>
using namespace std;
void swap(char &a,char &b)
{
	//cout<<"test";
	char temp=a;
	a=b;
	b=temp;
	//cout<<a<<" "<<b<<endl;
}
int main() {
	// your code goes here
//	int t;
//	cin>>t;

		char s[500],a[500];
		while(cin>>s)
		{
				if(!strcmp(s,"0"))	{cout<<"18"<<endl;continue;}
				if(!strcmp(s,"1"))	{cout<<"1"<<endl;continue;}
				int p,j=0,c=0;
		for(int i=strlen(s)-1;i>=0;i--)
		{	a[j]=0;
			p=2*(s[i]-48);
		//	cout<<p<<endl;
			a[j++]=(p+c)%10+48;
			c=(p+c)/10;
		}
		if(c)	a[j++]=c+48;
		a[j]='\0';
		//cout<<"j="<<j<<endl;
		//cout<<a<<endl;
	//	cout<<strlen(a)<<endl;
	int x=a[0]-48,i=1;
		if(x-2>=0)	a[0]=x-2+48;
		else
		{
			a[0]=a[0]+10-2;
		while(1)
		{	if(a[i]==48)	{a[i++]='9';continue;}
			if(!a[i])	break;
			a[i]-=1;
			if(a[i]>=48)	break;
			i++;
		}
		i=strlen(a)-1;
		while(a[i]==48)
			a[i--]='\0';
		}
		//cout<<a<<endl;
		for(int i=strlen(a)-1,k=0;k<=i;i--,k++)
		{//	cout<<a[i]<<" "<<a[k]<<endl;
			swap(a[i],a[k]);
		//	cout<<a[i]<<" "<<a[k]<<endl;
		}
	cout<<a<<endl;
	}
	return 0;
}