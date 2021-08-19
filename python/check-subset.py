n = int(input())
for i in range(n):
    a=int(input())
    b=set(input().split())
    c=int(input())
    d=set(input().split())
    e=b.difference(d)
    if len(e)==0:
        print(True)
    else:
        print(False)
