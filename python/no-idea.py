a=input().split(' ')
b=([int(i) for i in input().split(' ')])
c=set([int(i) for i in input().split(' ')])
d=set([int(i) for i in input().split(' ')])
e=0
for i in b:
    if i in c:
        e+=1
    if i in d:
        e-=1
print(e)
