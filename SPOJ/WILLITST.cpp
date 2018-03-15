/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	double k=log(t)/log(2);
	int x=floor(k);
	if(x!=k)		cout<<"NIE";
	else				cout<<"TAK";
	return 0;
}