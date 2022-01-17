a, b = map(int,input().split())

small = min(a,b)
lcm = 1 #최소 공배수
gcf = 1 #최대 공약수
answer = True
while answer:
    answer = False
    for i in range(2,small+1):
        if (a%i==0) and (b%i==0):
            lcm*=i
            gcf*=i
            a//=i
            b//=i
            answer = True
            break
lcm = lcm*a*b
print(gcf)
print(lcm)