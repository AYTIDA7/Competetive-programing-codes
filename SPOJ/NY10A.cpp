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
		int n,a[8];
		cin>>n;
		char s[40];
		cin>>s;
		for(int i=0;i<8;i++)
			a[i]=0;
		for(int i=0;i<=37;i++)
		{
			if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')	a[0]++;
			else if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')	a[1]++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')	a[2]++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')	a[3]++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')	a[4]++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')	a[5]++;
			else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')	a[6]++;
			else a[7]++;
		}
		cout<<n<<" ";
		for(int i=0;i<8;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}