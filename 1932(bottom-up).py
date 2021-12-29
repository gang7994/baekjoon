n = int(input())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

d = [[0]*i for i in range(1,n+1)]

for i in range(n):
    d[n-1][i] = arr[n-1][i]
for i in range(n-1,-1,-1):
    for j in range(i):
        d[i-1][j] = max(d[i][j],d[i][j+1])+arr[i-1][j]
        
print(d[0][0])