n = int(input())
cute_0 = 0
cute_1 = 0
for i in range(n):
    x = int(input())
    if x==0:
        cute_0+=1
    else:
        cute_1+=1
if cute_0 >cute_1:
    print("Junhee is not cute!")
else:
    print("Junhee is cute!")