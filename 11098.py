n = int(input())

for i in range(n):
    p = int(input())
    arr = []
    for j in range(p):
        c, name = map(str, input().split())
        arr.append([int(c), name])
    arr.sort(reverse=True)
    print(arr[0][1])