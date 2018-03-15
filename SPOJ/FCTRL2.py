''' Author - Aditya Haridas Menon
   Spoj id - ad2411

'''	
# your code goes here
a=int(input())
for j in range(1,a+1):
	f=1
	b=int(input())
	for i in range(1,b+1):
		f=f*i
	print(f)