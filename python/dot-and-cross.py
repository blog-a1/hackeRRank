import numpy
n=int(input())
arr1,arr2=[(numpy.array([list(map(int,input().split())) for _ in range(n)])) for _ in range(2)]
print (numpy.dot(arr1,arr2))

