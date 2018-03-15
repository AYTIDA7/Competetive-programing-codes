/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,flag=1;
	do
	{
		cin>>a>>b>>c;
		if((a||b||c))
		{
			if((a!=b)&&(b!=c)&&(c!=a)){
			if(b-a==c-b)	cout<<"AP "<<c+(b-a)<<endl;
			else			cout<<"GP "<<c*b/a<<endl;
		}
		}
		else flag=0;
	}while(flag);
	return 0;
}