t = int(input())

for i in range(t):
    n = int(input())
    school = []
    for j in range(n):
        s, l = input().split()
        school.append((int(l),s))
    result = max(school)
    print(result[1])