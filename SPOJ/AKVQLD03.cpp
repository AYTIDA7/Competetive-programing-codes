/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
struct tree{
	pair<int,int> range;
	int val;
	tree *left;
	tree *right;
};
tree *makeTree(int low,int high)
{
	tree *t=new tree;
	t->range=make_pair(low,high);
	t->val=0;
	t->left=NULL;
	t->right=NULL;
	if(low==high)
		return t;
	int mid=(low+high)/2;
	t->left=makeTree(low,mid);
	t->right=makeTree(mid+1,high);
	return t;
}
void updateVal(tree* t,int pos,int v)
{
	if(t!=NULL)
	{
		if(t->range.first<=pos&&t->range.second>=pos)
		{
			t->val+=v;
			updateVal(t->left,pos,v);
			updateVal(t->right,pos,v);
		}
	}
}
int quant(tree *t,int p1,int p2)
{
	if(t==NULL)
		return 0;
	if(t->range==make_pair(p1,p2))
		return t->val;
	int v=0;
	if(t->left->range.second>=p1&&t->left->range.second>=p2)
		v+=quant(t->left,p1,p2);
	else if(t->left->range.second>=p1)
		v+=quant(t->left,p1,t->left->range.second);
	if(t->right->range.first<=p2&&t->right->range.first<=p1)
		v+=quant(t->right,p1,p2);
	else if(t->right->range.first<=p2)
		v+=quant(t->right,t->right->range.first,p2);
	return v;
}
int main()
{
	int n,q;
	cin>>n>>q;
	tree *T=makeTree(1,n);
	while(q--)
	{
		string s;
		int a,b;
		cin>>s>>a>>b;
		if(s=="add")
		{
			updateVal(T,a,b);
		}
		else
		{
			cout<<quant(T,a,b)<<endl;
		}

	}
}