def swap_case(s):
    convert=''
    for i in s:
        if(i.isupper())==True:
            convert+=i.lower()
        elif(i.islower())==True:
            convert+=i.upper()
        elif(i.isspace())==True:
            convert+=i
    return convert
    return ''.join([i.lower() if i.isupper  else i.upper for i in s])
    return s.swapcase()


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
