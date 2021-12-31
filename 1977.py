import math
m = int(input())
n = int(input())
result = []
while m <= n:
    if(math.sqrt(m)==math.ceil(math.sqrt(m))==math.trunc(math.sqrt(m))):
        result.append(m)
    m+=1
if result:
    print(sum(result))
    print(min(result))
else:
    print('-1')