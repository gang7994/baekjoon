h1, m1, s1 = map(int, input().split(':'))
h2, m2, s2 = map(int, input().split(':'))

h = h2-h1
m = m2-m1
s = s2-s1

if s<0:
    s+=60
    m-=1
if m<0:
    m+=60
    h-=1
if h<0:
    h+=24
if len(str(h)) == 1:
    print(str(h).zfill(2),':',sep='',end='')
else:
    print(h,':',sep='',end='')
if len(str(m)) == 1:
    print(str(m).zfill(2),':',sep='',end='')
else:
    print(m,':',sep='',end='')
if len(str(s)) == 1:
    print(str(s).zfill(2),end='')
else:
    print(s,end='')