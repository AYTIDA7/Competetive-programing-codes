/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		queue<pair<int,int> > q;
		cin>>n>>m;
		char c[200][200];
		int a[200][200],A[200][200];
		for(int i=0;i<n;i++)
			cin>>c[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				A[i][j]=-1;
				a[i][j]=c[i][j]-48;
				if(a[i][j])
				{
					A[i][j]=0;
					q.push(make_pair(i,j));
				}
			}
		while(!q.empty())
		{
			pair<int,int> p=q.front();
			q.pop();
			//cout<<p.first<<" "<<p.second<<endl;
			if(p.first>0&&p.first<n-1&&p.second>0&&p.second<m-1)
			{
				int b[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
				for(int i=0;i<4;i++)
				{
					if(A[p.first+b[i][0]][p.second+b[i][1]]==-1)
					{
					//	cout<<p.first+b[i][0]<<" "<<p.second+b[i][1]<<endl;
						q.push(make_pair(p.first+b[i][0],p.second+b[i][1]));
						A[p.first+b[i][0]][p.second+b[i][1]]=1+A[p.first][p.second];
					}
				}
			}
			else
			{
				if(p.first>0&&p.first<n-1)
				{
					if(p.second>0)
					{
						int b[3][2]={{1,0},{-1,0},{0,-1}};
						for(int i=0;i<3;i++)
						{
							if(A[p.first+b[i][0]][p.second+b[i][1]]==-1)
							{
								q.push(make_pair(p.first+b[i][0],p.second +b[i][1]));
								A[p.first+b[i][0]][p.second+b[i][1]]=1+A[p.first][p.second];
							}
						}
					}
					else
					{
						int b[3][2]={{1,0},{-1,0},{0,-1}};
						for(int i=0;i<3;i++)
						{
							if(A[p.first+b[i][0]][p.second+b[i][1]]==-1)
							{
								q.push(make_pair(p.first+b[i][0],p.second +b[i][1]));
								A[p.first+b[i][0]][p.second+b[i][1]]=1+A[p.first][p.second];
							}
						}
					}
				}
				else
				{
					if(p.first>0)
					{
						int b[3][2]={{0,1},{-1,0},{0,-1}};
						for(int i=0;i<3;i++)
						{
							if(A[p.first+b[i][0]][p.second+b[i][1]]==-1)
							{
								q.push(make_pair(p.first+b[i][0],p.second +b[i][1]));
								A[p.first+b[i][0]][p.second+b[i][1]]=1+A[p.first][p.second];
							}
						}
					}
					else
					{
						int b[3][2]={{1,0},{0,1},{0,-1}};
						for(int i=0;i<3;i++)
						{
							if(A[p.first+b[i][0]][p.second+b[i][1]]==-1)
							{
								q.push(make_pair(p.first+b[i][0],p.second +b[i][1]));
								A[p.first+b[i][0]][p.second+b[i][1]]=1+A[p.first][p.second];
							}
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout<<A[i][j]<<" ";
			cout<<endl;
		}
	}
}