import numpy
numpy.set_printoptions(legacy='1.13')
n,m=map(int,input().split())
a=numpy.zeros((n,m),float)
for i in range(n):
    a[i]=numpy.array(input().split(),float)
print(numpy.mean(a,axis=1),numpy.var(a,axis=0),numpy.std(a),sep='\n')



