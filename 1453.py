n = int(input())
arr = list(map(int, input().split()))
arr = list(set(arr))
print(n-len(arr))