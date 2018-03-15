/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		long long int z,b;
		cin>>a>>b;
		if(b%4)
		z=pow(((a[a.length()-1]-48)%10),((b%4)));
		else if(b==0)
		z=1;
		else
		z=pow(((a[a.length()-1]-48)%10),4);
		cout<<z%10<<endl;
	}
	return 0;
}