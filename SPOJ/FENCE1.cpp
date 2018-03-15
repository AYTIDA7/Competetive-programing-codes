/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(cin>>t)
	{
		if(t==0)	break;
		float d=t*t/(2*3.14159);
		printf("%.02f\n",d);
	}
	return 0;
}