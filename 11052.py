n = int(input())

arr = list(map(int, input().split()))
d = [0]*(n+1)

d[1] = arr[0]
for i in range(2,n+1):
    for j in range(i):
        d[i] = max(d[i-(j+1)]+arr[j],d[i])  
print(d[n])