n,k = map(int, input().split())
def fac(n):
    result = 1
    for i in range(n,0,-1):
        result*=i
    return result
print(fac(n)//(fac(k)*fac(n-k)))