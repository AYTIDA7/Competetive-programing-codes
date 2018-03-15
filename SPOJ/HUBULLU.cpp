/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(b==0)	cout<<"Airborne wins.\n";
		else		cout<<"Pagfloyd wins.\n";
	}
	return 0;
}