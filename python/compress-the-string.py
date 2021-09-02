from itertools import groupby
for i, n in groupby(input()):
    a = list(n)  
    print("(", len(a), ", ", a[0], ")", end = " ", sep = "")
