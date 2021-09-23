import numpy
n,m,p=map(int,input().split())
a=[]
for i in range(n+m):
    b=input().split()
    a.append(b)
print(numpy.array(a,int))

    


