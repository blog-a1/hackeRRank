n=int(input())
a=set(map(int, input().split()))
o=int(input())
for i in range(o):
    
    op,p=input().split()
    b=set(map(int,input().split()))

    if op=='intersection_update':
        a.intersection_update(b)

    elif op=='update':
        a.update(b)

    elif op=='difference_update':
        a.difference_update(b)

    elif op=='symmetric_difference_update':
        a.symmetric_difference_update(b)
print(sum(a))
