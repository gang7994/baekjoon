t = int(input())
for i in range(t):
    n,m = map(int, input().split())
    result=0
    for j in range(n,m+1):
        string = str(j)
        for k in string:
            if k == '0':
                result+=1
    print(result)