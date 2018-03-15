/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int a,d;
	cin>>a>>d;
	while(a&&d)
	{
		if(!(a&&d))	break;
		int *A=new int[a];
		int *D=new int[d];
		for(int i=0;i<a;i++)	cin>>A[i];
		for(int i=0;i<d;i++)	cin>>D[i];
		sort(A,A+a);sort(D,D+d);
		if(A[0]<D[0])	cout<<"Y\n";
		else if(A[0]==D[0]&&A[0]<D[1])	cout<<"Y\n";
		else if(A[0]>D[0]&&A[0]<D[1])	cout<<"Y\n";
		else	cout<<"N\n";
		cin>>a>>d;
		
	}
	return 0;
}