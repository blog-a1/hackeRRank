n=int(input())
l=[]
for i in range(n):
    a=input()
    l.append(a)
b=dict()
for i in l:
    if i in b:
        b[i]+=1
    else:
        b[i]=1
l2=list(b.values())
c=set(l)
print(len(c))
for i in l2:
    print(i,'',end="")
print()
