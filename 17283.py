import math
l = int(input())
r = int(input())
result = 0
i = 1
while True:
    l = math.floor(l * (r/100))
    if(l <= 5): break
    result+= l*math.pow(2,i)
    i+=1
print(int(result))