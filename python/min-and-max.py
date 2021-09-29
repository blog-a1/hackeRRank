import numpy
n,m=map(int,input().split())
a=numpy.zeros((n,m),int)
for i in range(n):
    a[i]=numpy.array(input().split())
print(numpy.max(numpy.min(a,axis=1)))


