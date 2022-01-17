n, k = map(int,input().split())
coins = []
for i in range(n):
    value = int(input())
    coins.append(value)
coins.sort(reverse=True)
result = 0
for coin in coins:
    if coin <= k:
        while True:
            if(k-coin >= 0):
                k-=coin
                result+=1
            else:
                break
    if k == 0:
        break
print(result)