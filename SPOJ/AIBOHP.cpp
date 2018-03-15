/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
int lcs(char s1[],int s1_l,char s2[],int s2_l)
{  
	int L[s1_l+1][s2_l+1];
   	for (int i=0; i<=s1_l; i++)
   	{
    	for (int j=0; j<=s2_l; j++)
     	{
       		if (i == 0 || j == 0)
         		L[i][j] = 0;
       		else if (s1[i-1] == s2[j-1])
         		L[i][j] = L[i-1][j-1] + 1; 
       		else
        		L[i][j] = max(L[i-1][j], L[i][j-1]);
    	 }
   	}
	return L[s1_l][s2_l];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[6101];
		cin>>s;
		char *s1=new char[strlen(s)];
		for(int i=strlen(s)-1,j=0;i>=0;i--)
			s1[j++]=s[i];
		s1[strlen(s)]='\0';
		cout<<strlen(s)-lcs(s,strlen(s),s1,strlen(s1))<<endl;
	}
}