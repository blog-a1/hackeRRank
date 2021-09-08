a,b=int(input()),input().split().index("MARKS")
print(sum([int(input().split()[b]) for _ in range(a)])/a)
