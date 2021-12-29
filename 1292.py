a,b = map(int, input().split())
count = 0
result = 0
mul = 1
while count != b:
    for i in range(mul):
        count+=1
        if(count>=a):
            result+=mul
        if count == b:
            break   
    mul+=1
print(result)