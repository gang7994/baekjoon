result = []
while True:
    try:
        arr = list(map(float, input().split()))
    except:
        break
    if len(arr) == 0:
        break
    n = [[arr[0], arr[1]],[arr[2], arr[3]],[arr[4], arr[5]],[arr[6], arr[7]]]
    if n[0] == n[2]:
        x = (n[1][0]+n[3][0])-n[0][0]
        y = (n[1][1]+n[3][1])-n[0][1]
        
    elif n[0]==n[3]:
        x = (n[1][0]+n[2][0])-n[0][0]
        y = (n[1][1]+n[2][1])-n[0][1]
    elif n[1] == n[2]:
        x = n[0][0]+n[3][0]-n[1][0]
        y = n[0][1]+n[3][1]-n[1][1]
    else:
        x = n[0][0]+n[2][0]-n[1][0]
        y = n[0][1]+n[2][1]-n[1][1]
    print('%.3f'%x,'%.3f'%y)