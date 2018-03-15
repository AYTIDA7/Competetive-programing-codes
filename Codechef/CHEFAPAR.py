''' Author - Aditya Haridas Menon
   Codechef id - ad2411
'''
t=int(input())
while t!=0:
    n=int(input())
    sum=0
    a=list(input().split())
    flag=1
    for i in range(0,n):
        if flag==1 and a[i]=='0':
            flag=0
        if flag==0:
            if a[i]=='1':
                sum+=100
            else:
                sum+=1100
        else:
            if a[i]=='0':
                sum+=1000
    print(sum)
    t-=1
 