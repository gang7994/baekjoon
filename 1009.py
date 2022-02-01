t = int(input())
arr = [[1],[2,4,8,6],[3,9,7,1],[4,6],[5],[6],[7,9,3,1],[8,4,2,6],[9,1],[10]]
for i in range(t):
    a,b = map(int, input().split())
    if a==1:
        print(1)
    elif b==1:
        print(arr[a%10-1][0])
    else:
        print(arr[a%10-1][b%len(arr[a%10-1])-1])