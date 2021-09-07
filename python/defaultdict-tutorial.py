from collections import defaultdict
d=defaultdict(list)
a,b= map(int, input().split())
for i in range(1,a+1):
    d[input()].append(str(i))
for i in range(b):
    print(' '.join(d[input()]) or -1)
