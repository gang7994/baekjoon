n = int(input())
number = 666
name = '666'
count = 0
while 1:
    if name in str(number):
        count+=1
    if count == n:
        print(number)
        break
    number+=1