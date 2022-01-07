n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))
arr.sort()

for i in range(len(arr)):
    if arr[i]==arr[i-1]:
        continue
    print(arr[i], end='')