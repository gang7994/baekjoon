#Greedy Algorithm
n = input()
num_list = list(map(int,n))
num_list.sort(reverse=True)
if(num_list[len(n)-1]==0 and sum(num_list)%3==0):
    for i in num_list:
        print(i, end='')
else:
    print('-1')