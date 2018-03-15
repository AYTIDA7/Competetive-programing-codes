/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include <stack>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		stack<char> s1;
		cin>>s;
		for(int i=0;s[i]!='\0';i++)
		{
			if(isalpha(s[i]))	cout<<s[i];
			else if(s[i]!=')')	s1.push(s[i]);
			else
				while(1)
				{
					if(s1.top()=='(')	
					{
						s1.pop();
						break;
					}
					cout<<s1.top();
					s1.pop();
				}
		}
		cout<<endl;
	}
	return 0;
}