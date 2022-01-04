n,m=map(int, input().split())
result=''
for i in range(n):
    result+=(str(n))
if len(result) > m:
    for i in range(m):
        print(result[i],end='')
else:
    print(result)