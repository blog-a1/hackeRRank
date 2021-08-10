n = int(input())
s = set(map(int, input().split()))
cmd=int(input())
for i in range(cmd) :
    ch=input().split()
    if ch[0]=="pop" :
        s.pop()
    elif ch[0]=="remove" :
        s.remove(int(ch[1]))
    elif ch[0]=="discard" :
        s.discard(int(ch[1]))
print(sum(s))
