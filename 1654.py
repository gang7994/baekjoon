k, n = map(int, input().split())
arr = []
for i in range(k):
    arr.append(int(input()))

arr.sort()

def bs(arr, start, end):
    mid = (start+end)//2
    if mid==0:
        mid=1
    if start > end:
        return mid
    tmp = 0
    for i in arr:
        if i >= mid:
            tmp += i//mid

    if tmp >= n:
        return bs(arr, mid+1, end) 
    elif tmp < n:
        return bs(arr, start, mid-1)

print(bs(arr,1,max(arr)))