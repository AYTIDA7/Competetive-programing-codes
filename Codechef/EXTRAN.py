''' Author - Aditya Haridas Menon
   Codechef id - ad2411
'''
t=int(input())
while t!=0:
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    for i in range(len(l)-1):
        if l[i+1]-l[i]!=1:
            if l[i]-l[i-1]==1:
                print(l[i+1])
            else:
                print(l[i])                
            break
    t-=1  