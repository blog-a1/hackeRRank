from collections import deque

n = int(input())
a=deque()
for i in range(n):
    b=input().split()
    if len(b)==2:
        getattr(a,b[0])(int(b[1]))
    else:
        getattr(a,b[0])()
print(' '.join(map(str,a))) 
