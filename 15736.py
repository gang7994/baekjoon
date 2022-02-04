n = int(input())
count = 0
tmp = 1
while True:
    if pow(tmp,2) <= n:
        count+=1
    else:
        break
    tmp+=1
print(count)