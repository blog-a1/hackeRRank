from collections import OrderedDict
n=int(input())
o=OrderedDict()
for i in range(n):
    a=input().split(' ')
    b=int(a[-1])
    c=" ".join(a[:-1])
    if o.get(c):
        o[c] += b
    else:
        o[c] = b

for i,v in o.items():
    print(i,v)
