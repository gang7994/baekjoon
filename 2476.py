n = int(input())
result = []
for i in range(n):
    arr = list(map(int, input().split()))
    if(arr[0]==arr[1]==arr[2]):
        result.append(10000+arr[0]*1000)
    elif(arr[0]!=arr[1]!=arr[2]):
        result.append(100*max(arr))
    else:
        if arr[0]==arr[1]:
            result.append(1000+arr[0]*100)
        elif arr[0]==arr[2]:
            result.append(1000+arr[0]*100)
        else:
            result.append(1000+arr[1]*100)
print(max(result))