
a,b= map(int,input().split())
for i in range(1,a,2): 
    print((i * ".|.").center(b, "-"))
print("WELCOME".center(b,"-"))
for i in range(a-2,-1,-2): 
    print((i * ".|.").center(b, "-"))
