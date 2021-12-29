n = int(input())
t = [int(input()) for _ in range(n)]
def fibonacci(n):
    zero = [0] * (n+2)
    one = [0] * (n+2)
    zero[0] = 1
    one[0] = 0
    zero[1] = 0
    one[1] = 1
    for i in range(2,n+1):
        zero[i] = zero[i-1]+zero[i-2]
        one[i] = one[i-1]+one[i-2]
    print(zero[n],one[n])
    
for i in t:
    fibonacci(i)