t = int(input())
for i in range(t):
    n = int(input())
    shop = list(map(int, input().split()))
    shop.sort()
    print((shop[n-1]-shop[0])*2)