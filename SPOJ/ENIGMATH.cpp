/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)	return b;
	if(b>a)		return gcd(b%a,a);
	else 		return gcd(a%b,b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int k=gcd(a,b);
		cout<<b/k<<" "<<a/k<<endl;
		
	}
	return 0;
}