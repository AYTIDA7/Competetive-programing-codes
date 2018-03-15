''' Author - Aditya Haridas Menon
   Spoj id - ad2411

'''	
t=int(input())
while t != 0:
	a, b = map(int, input().split())
	def gcd(x,y):
		if x==0:
			return y
		else:
			return gcd(y%x,x)
	print (gcd(a,b))
	t=t-1