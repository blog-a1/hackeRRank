import collections
n=int(input())
s=collections.Counter(map(int, input().split()))
c=int(input())
m=0
for i in range(c):
    size,p=map(int, input().split())
    if s[size]: 
        m+=p
        s[size]-=1
print(m)
