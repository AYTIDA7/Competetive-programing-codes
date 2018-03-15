/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int z;
		if(b%4)
		z=pow((a%10),(b%4));
		else if(b==0)
		z=1;
		else
		z=pow((a%10),4);
		cout<<z%10<<endl;
	}
	return 0;
}