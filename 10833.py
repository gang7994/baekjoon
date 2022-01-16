n = int(input())
arr = []
for i in range(n):
    a,b = map(int, input().split())
    arr.append([a,b])
tmp = 0
for i in arr:
    tmp+=i[1]%i[0]
print(tmp)