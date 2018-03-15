/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <stdio.h>
 
 
 
 
int main(){
  
int n,v,c;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&v);
        c=0;
        while(v>=5){
            v /= 5;
            c += v;
        }
        printf("%d\n",c);
    }
 
    return 0;
}