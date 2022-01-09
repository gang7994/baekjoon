people = []
for i in range(9):
    n = int(input())
    people.append(n)
    
temp = sum(people)-100
for i in range(8):
    for j in range(i+1,9):
        if (people[i] + people[j]) == temp:
            break
    if (people[i] + people[j]) == temp:
            break
people.remove(people[i])
people.remove(people[j-1])
people.sort()
for i in range(7):
    print(people[i])