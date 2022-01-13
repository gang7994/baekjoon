n,k = map(int, input().split())
class Circlequeue:
    def make(self,n):
        self.front = 0
        self.rear = 0
        self.items = [None] * n
        for i in range(1,n+1):
            self.rear = (self.rear + 1) % n
            self.items[self.rear] = i
            
    def dequeue(self,k,n):
        count = 0
        while count != k:
            self.front = (self.front+1)%n
            if self.items[self.front] != None:
                count+=1
        x =  self.items[self.front]
        self.items[self.front] = None
        return x
    
    def print(self):
        out = []
        if self.front < self.rear:
            out = self.items[self.front+1:self.rear+1]
        else:
            out = self.items[self.front+1:n] + self.items[0:self.rear+1]

        print("[f=%s, r=%d] ==> "%(self.front, self.rear), out)
        

q = Circlequeue()
q.make(n)
print("<",end='')
for i in range(1,n+1):
    print(q.dequeue(k,n),end ='')
    if i != n:
        print(", ",end='')
print(">")

#개선방법
n,k = map(int, input().split())
circle = list(range(1,n+1))
index = 0
print("<",end='')
while circle:
    index= (index +k-1)%len(circle)
    print(circle.pop(index),end='')
    if len(circle) != 0:
        print(", ",end='')
print(">")        
