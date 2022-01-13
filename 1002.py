import math
t = int(input())
for i in range(t):
    x1,y1,r1,x2,y2,r2 = map(int, input().split())
    distance = math.pow(x1-x2,2) + math.pow(y1-y2,2)
    r_plus = math.pow(r1+r2,2)
    r_minus = math.pow(r1-r2,2)
    if r_minus < distance and distance < r_plus:
        print("2")
    elif r1==r2 and distance ==0:
        print("-1")
    elif r_plus == distance or r_minus == distance:
        print("1")
    else:
        print("0")

        