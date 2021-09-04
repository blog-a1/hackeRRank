from itertools import product
a,b=map(int, input().split())
c=(list(map(int, input().split()))[1:] for _ in range(a))
r=map(lambda x: sum(i**2 for i in x) % b, product(*c))
print(max(r))
