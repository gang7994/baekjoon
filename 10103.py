n = int(input())
aa = 100
bb = 100
for i in range(n):
    a,b = map(int, input().split())
    if a > b:
        bb-=a
    elif a < b:
        aa-=b
print(aa)
print(bb)