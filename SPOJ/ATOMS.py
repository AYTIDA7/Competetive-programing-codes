'''   Author - Aditya Haridas Menon
   	  Spoj id - ad2411
'''
	
import math
t=int(input())
while t!=0:
	n,k,m=map(int,input().split())
	if n>m:
		print (0)
	else:
		p=int(m/n)
		a=math.floor(math.log(p)/math.log(k))
		print (a)
	t=t-1