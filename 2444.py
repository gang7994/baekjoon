n = int(input())

for i in range(n-1):
    for j in range(i,n-1):
        print(' ',end='')
    for j in range(i*2+1):
        print("*",end='')
    print()
    
for i in range(n*2-1):
    print("*",end='')
print()  

for i in range(1,n):
    for j in range(0,i):
        print(' ',end='')
    for j in range(n*2-(i*2)-1):
        print("*",end='')
    print()
        