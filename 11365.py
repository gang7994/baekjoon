while True:
    arr = input()
    if arr =="END":
        break
    for i in range(len(arr)-1,-1,-1):
        print(arr[i],end='')
    print()