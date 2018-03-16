''' Author - Aditya Haridas Menon
   Codechef id - ad2411
'''
t=int(input())
while t!=0:
    l=[]
    zero=0
    n=int(input())
    for i in range(n):
        k=list(map(int,input().split()))
        l.append(k)
        zero+=k.count(0)
   # print(l,zero)
    bw=0
    while True:
        if n==0:
            break
        if zero>=n*(n-1):
            break
        else:
            n-=1
            bw+=1
    print(bw)
    t-=1
 