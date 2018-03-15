/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
void lcs(string s1,string s2)
{
	
	int dp[s1.length()+1][s2.length()+1];
	dp[0][0]=0;
	for (int i=0;i<=s1.length();i++)
		for(int j=0;j<=s2.length();j++)
		{
			if(i==0||j==0)
				dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
		
		int length=dp[s1.length()][s2.length()];
		//cout<<length<<endl;
		char s[length];
		s[length]='\0';
		int i=s1.length(),j=s2.length();
		while(i>0&&j>0)
		{
			if(s1[i-1]==s2[j-1])
			{
				s[--length]=s1[i-1];
				i--;
				j--;
			}
			else if(dp[i-1][j]>dp[i][j-1])
				i--;
			else
				j--;
		}
		//cout<<s<<endl;
		char S[10000];
		int k=0,l=0;
		i=0,j=0;
		while(i<s1.length()||j<s2.length())
		{
			if(i<s1.length()&&s1[i]!=s[k])
			{
				S[l++]=s1[i++];
			}
			else if(j<s2.length()&&s2[j]!=s[k])
			{
				S[l++]=s2[j++];
			}
			else if(i<s1.length()&&j<s2.length()&&s1[i]==s[k]&&s2[j]==s[k])
			{
				S[l++]=s[k++];
				i++;j++;
			}

		}
		S[l]='\0';
		cout<<S<<endl;

}
int main(int argc, char const *argv[])
{
	/* code */
	string s1,s2;
	while(cin>>s1>>s2)
	{

		//cout<<s2;
		lcs(s1,s2);
	}
	return 0;
}