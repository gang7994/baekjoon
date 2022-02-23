m = int(input())
n = int(input())
result = []
if m ==1:
    m+=1
for i in range(m, n+1):
    cnt=0
    for j in range(2,i):
        if i%j == 0:
            cnt+=1
            
    if cnt == 0:
        result.append(i)   
if result:
    print(sum(result))
    print(result[0])
else:
    print('-1')
        