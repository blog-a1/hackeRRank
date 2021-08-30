from itertools import permutations
a,b= input().split()
c=list(permutations(a,int(b)))
c.sort()
for i in c:
    print(''.join(i))
