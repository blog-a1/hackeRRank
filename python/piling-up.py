for e in range(int(input())):
    input()
    l=[int(i) for i in input().split()]
    m=l.index(min(l))
    a=l[:m]
    b=l[m+1:]
    if a==sorted(a,reverse=True) and b==sorted(b):
        print("Yes")
    else:
        print("No")
