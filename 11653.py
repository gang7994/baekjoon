n = int(input())
result = []
mod = 2
while True:
    if mod >= n:
        result.append(mod)
        break
    if n % mod == 0:
        result.append(mod)
        n //= mod
        mod = 2
    else:
        mod+=1
result.sort()
if n != 1:
    for i in result:
        print(i)