/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
# define INF 999999999999999999
using namespace std;
map <long long int,int> m;
class graph{
    long long int n;
    list<pair<long long int,long long int> > *adj;
    public:
        graph(int N)
        {
            n=N;
            adj=new list< pair<long long int,long long int> >[n+1];
        }
        void addEdge(long long int a,long long int b,long long int wt)
        {
            adj[a].push_back(make_pair(b, wt));
            adj[b].push_back(make_pair(a, wt));
        }
        void shortestPath(long long int src,long long int k,long long int x)
        {
            m.clear();
            priority_queue< pair<long long int,long long int>, vector <pair<long long int,long long int> >, greater<pair<long long int,long long int> > > pq;
            vector<long long int> dist(100001, INF);
            pq.push(make_pair(0, src));
            dist[src] = 0;
            /*if(src<=k)
            {
                for(long long int i=1;i<=k;i++)
                    if(i!=src)
                        dist[i]=x;
                    else
                        dist[i]=0;  
            }*/
            while (!pq.empty())
            {
                long long int u = pq.top().second;
                /*if(u<=k)
                for(long long int i=1;i<=k;i++)
                {
                    if(u!=i)
                    adj[u].push_back(make_pair(i,x));
                }*/
                m[u]=1;
                pq.pop();
                list< pair<long long int, long long int> >::iterator i;
                for (i = adj[u].begin(); i != adj[u].end(); ++i)
                {
                    long long int v = (*i).first;
                    long long int weight = (*i).second;
                    if (dist[v] > dist[u] + weight&&m.find(v)==m.end())
                    {
                        dist[v] = dist[u] + weight;
                        pq.push(make_pair(dist[v], v));
                    }
                }
                if(u<=k&&dist[k]>dist[u]+x)
                {
                    for(long long int j=1;j<=k;j++)
                            if (dist[j] > dist[u] + x&&m.find(j)==m.end())
                            {
                                dist[j] = dist[u] + x;
                                pq.push(make_pair(dist[j], j));
                            }       
                }
                /*if(u<=k&&src<=k)
                {
                    if(dist[u]>x)
                        dist[u]=x;
                }
                */
            }
            for (long long int i = 1; i <=n; ++i)
            {
            //  if(i<=k&&src<=k&&dist[i]>x)
            //      dist[i]=x;
                cout<<dist[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,x,m,s,a,b,c;
        cin>>n>>k>>x>>m>>s;
        graph g(n);
    //  for(long long int i=1;i<=k;i++)
    //      for(long long int j=i+1;j<=k;j++)
    //      {
    //          g.addEdge(i,j,x);
    //  }
    //  cout<<"t1\n";
        for(long long int i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            g.addEdge(a,b,c);
        }
        g.shortestPath(s,k,x);
    }
} 