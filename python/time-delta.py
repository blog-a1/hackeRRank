
from datetime import datetime, timedelta
for _ in range(int(input())):
    s1=input()
    t1=datetime.strptime(s1[0:24],'%a %d %b %Y %H:%M:%S')
    if s1[25]=='+':
        t1-=timedelta(hours=int(s1[26:28]),minutes=int(s1[28:]))
    elif s1[25]=='-':
        t1+=timedelta(hours=int(s1[26:28]),minutes=int(s1[28:]))
    s1=input()
    t2=datetime.strptime(s1[0:24],'%a %d %b %Y %H:%M:%S')
    if s1[25]=='+':
        t2-=timedelta(hours=int(s1[26:28]),minutes=int(s1[28:]))
    elif s1[25]=='-':
        t2+=timedelta(hours=int(s1[26:28]),minutes=int(s1[28:]))
    print (int(abs((t1-t2).total_seconds())))
