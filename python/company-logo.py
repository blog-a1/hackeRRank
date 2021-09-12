#!/bin/python3

import math
import os
import random
import re
import sys


s=input()
dic={}
for i in s:
    if i not in dic :
        dic[i]=1
    elif i in dic :
        dic[i] =dic[i]+1
c=0
m="}"
for j in dic.copy():
    if c in range(3):
        temp=0
        m="}"
        for x in dic :
            if temp<dic[x]:
                temp=dic[x]
                m=x
            elif temp==dic[x]:
                m=x if x<m else m
        print(m,dic[m])
        del dic[m]
        
        c=c+1
