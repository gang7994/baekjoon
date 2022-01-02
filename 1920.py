n = int(input())
a = list(map(int, input().split()))
m = int(input())
x = list(map(int, input().split()))

a.sort()

def binarysearch(arr, start, end, target):
    if start > end:
        return 0
    mid = (start+end)//2
    if arr[mid]==target:
        return 1
    elif target > arr[mid]:
        return binarysearch(arr,mid+1,end,target)
    elif target < arr[mid]:
        return binarysearch(arr,start,mid-1,target)

for i in x:
    print(binarysearch(a,0,len(a)-1,i))