from math import ceil

s, k = map(int, input().split())

def multi(s,k):
    if s == k:
        return 1
    elif k == 1:
        return s
    else:
        n = ceil(s/k)
        return n*multi(s-n,k-1)

print(multi(s,k))