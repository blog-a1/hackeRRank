import re
r = int(input())
for i in range(0,r):
    s = str( input() )
    if True:
        try:
            reg = re.compile(s)
        except re.error:
            print(False)
        else:
            print(True)
