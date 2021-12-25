x = int(input())
n = [64]
while sum(n) != x:
    n[len(n)-1] = n[len(n)-1]/2
    n.append(n[len(n)-1])
    if sum(n)-n[len(n)-1] >= x:
        del n[len(n)-1]
print(len(n))