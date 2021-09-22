import numpy
n,m=input().split()
a=[]
for i in range(int(n)):
    b=input().split()
    a.append(b)
c=numpy.array(a,int)
print(numpy.transpose(c))
print(c.flatten())
    


