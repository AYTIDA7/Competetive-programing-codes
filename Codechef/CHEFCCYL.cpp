/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q,v,e;
        cin>>n>>q;
        vector<vector<ll> > g(n+1);
        vector<ll> G(2*(n+1),0);
        for(ll i=1;i<=n;i++)
        {
            cin>>v;
            g[i].resize(v+2,0);
            g[i][1]=0;
            for(ll j=1;j<=v;j++)
            {
                cin>>e;
                g[i][j+1]=g[i][j]+e;
            }
        //  cout<<g[i].size()<<endl;
        }
        vector<ll> v1(n+1),v2(n+1),E(n+1);
        for(ll i=1;i<=n;i++)
        { 
            cin>>v1[i]>>v2[i]>>E[i];
        }
        G[1]=0;
        G[2]=min(abs(g[1][v1[1]]-g[1][v2[n]]),g[1][g[1].size()-1]-abs(g[1][v1[1]]-g[1][v2[n]]));
        //cout<<abs(g[1][v1[1]]-g[1][v2[n]])<<" "<<g[1][g[1].size()-1]<<endl;
        for(ll i=3,j=1;j<n;i+=2,j++)
        {
            //cout<<j<<endl;
            G[i]=G[i-1]+E[j];
            G[i+1]=G[i]+min(abs(g[j+1][v1[j+1]]-g[j+1][v2[j]]),g[j+1][g[j+1].size()-1]-abs(g[j+1][v1[j+1]]-g[j+1][v2[j]]));
        }
        G[2*n+1]=G[2*n]+E[n];
 
        //for(ll i=1;i<=2*n;i+=2)
        //{
        //  cout<<G[i]<<" "<<G[i+1]<<endl;
        //}
        //cout<<G[2*n+1];
        for(ll i=0;i<q;i++)
        {
            int V1,V2,C1,C2;
            cin>>V1>>C1>>V2>>C2;
            if(n==1||C1==C2||C1>n||C2>n||V1>g[C1].size()-1||V2>g[C2].size()-1)
            {
                cout<<0<<endl;
                break;
            }
            if(C1>C2)
                swap(C1,C2),swap(V1,V2);
            ll dcw=min(abs(g[C1][V1]-g[C1][v1[C1]]),g[C1][g[C1].size()-1]-abs(g[C1][V1]-g[C1][v1[C1]]));
            ll cdcw=dcw+abs(G[C2*2-1]-G[C1*2]);
            ll D1=cdcw+min(abs(g[C2][V2]-g[C2][(C2==1)?v2[n]:v2[C2-1]]),g[C2][g[C2].size()-1]-abs(g[C2][V2]-g[C2][(C2==1)?v2[n]:v2[C2-1]]));
            //cout<<dcw<<" "<<cdcw<<" "<<D1<<endl;
            ll dacw=min(abs(g[C1][V1]-g[C1][(C1==1)?v2[n]:v2[C1-1]]),g[C1][g[C1].size()-1]-abs(g[C1][V1]-g[C1][(C1==1)?v2[n]:v2[C1-1]]));
            ll acdacw=dacw+abs(G[G.size()-1]-abs(G[C1*2-1]-G[C2*2]));
            ll D2=acdacw+min(abs(g[C2][V2]-g[C2][v1[C2]]),g[C2][g[C2].size()-1]-abs(g[C2][V2]-g[C2][v1[C2]]));
            //cout<<dacw<<" "<<acdacw<<" "<<D2<<endl;
            cout<<min(D1,D2)<<endl;
        }
 
 
    }
} 
