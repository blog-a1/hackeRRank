import calendar
a,b,c=map(int,input().split())
print((calendar.day_name[calendar.weekday(c,a,b)]).upper())
