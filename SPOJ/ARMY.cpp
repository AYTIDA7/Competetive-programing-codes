/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	// your code here
    int t;
    cin>>t;
    while(t--)
    {
        long long int g,m,k=0,j=0;
        cin>>g>>m;
        long long int *ng=new long long int[g];
        long long int *nm=new long long int[m];
        for(long long int i=0;i<g;i++)
            cin>>ng[i];
        for(long long int i=0;i<m;i++)
            cin>>nm[i];
        sort(ng,ng+g);
        sort(nm,nm+m);
        if(ng[g-1]>nm[m-1])     cout<<"Godzilla\n";
        else if(ng[g-1]<nm[m-1])    cout<<"MechaGodzilla\n";
        else
        {
            while(g&&m)
            {
                if(ng[j]>=nm[k])    
                {
                    m--;
                    k++;
                }
                else
                {
                    g--;
                    j++;
                }
            }
            if(g)    cout<<"Godzilla\n";
                else    cout<<"MechaGodzilla\n";
            
        }
    }
    return 0;
        
        
    }