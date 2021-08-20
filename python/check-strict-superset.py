a=set(input().split())
c,n=0,int(input())
for i in range (n):
    b=set(input().split())
    if a.issuperset(b):
        c+=1
print(c==n)
