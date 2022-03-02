arr = input()
for i in arr:
    if ord(i) >= 65 and ord(i) <=90:
        if ord(i)+13 > 90:
            print(chr(ord(i)+13-26),end='')
        else:
            print(chr(ord(i)+13),end='')
    elif ord(i) >= 97 and ord(i) <=122:
        if ord(i)+13 > 122:
            print(chr(ord(i)+13-26),end='')
        else:
            print(chr(ord(i)+13),end='')
    else:
        print(i,end='')