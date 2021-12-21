import math
n = input()
alphabet = [0,0,0,0,0,0,0,0,0]
for i in n:
    if i=='9':
        alphabet[6]+=1
    else:
        alphabet[int(i)]+=1
alphabet[6] = math.ceil(alphabet[6]/2)
print(max(alphabet))