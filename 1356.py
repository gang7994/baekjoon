n = input()

if(len(n)<= 1):
    print("NO")
    exit()
else:
    for i in range(len(n)-1):
        front, behind = 1,1;
        for j in range(i+1):
            front *= int(n[j])
        for k in range(i+1,len(n)):
            behind *= int(n[k])
        if(front == behind):
            print("YES")
            exit()
print("NO")