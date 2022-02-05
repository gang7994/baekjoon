n = int(input())
result = [0]*5
for i in range(n):
    a,b = map(int, input().split())
    if a==0 or b == 0:
        result[4]+=1
    elif a>0 and b>0:
        result[0]+=1
    elif a<0 and b>0:
        result[1]+=1
    elif a<0 and b<0:
        result[2]+=1
    else:
        result[3]+=1
print("Q1:",result[0])
print("Q2:",result[1])
print("Q3:",result[2])
print("Q4:",result[3])
print("AXIS:",result[4])