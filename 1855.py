n = int(input())
str = input()
arr = []
count = 1
num = 0
start = 0
while num !=int(len(str)/n):
    if(count%2!=0):
        arr.append(list(str[start:start+n]))
        start+=n
        num+=1
        count+=1
    else:
        arr.append(list(reversed(str[start:start+n])))
        start+=n
        num+=1
        count+=1

for i in range(n):
    for j in range(int(len(str)/n)):
        print(arr[j][i],end='')
