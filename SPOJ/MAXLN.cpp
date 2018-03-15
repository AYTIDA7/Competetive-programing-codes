/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t,i=1;
	cin>>t;
	while(t--)
	{
		long double n;
		cin>>n;
		long double s=4*n*n+1/4.0;
		cout<<"Case "<<i++<<": ";
		printf("%.2Lf\n",s);
	}
	return 0;
}