#include <stdio.h>
int money[100004] ={0,};
int top = -1;

void push(int n) {
    money[++top] = n;
}

void pop(void) {
    top--;
}

int main(void) {
    int k;
    long long total=0;
    scanf("%d", &k);
    for(int i=0;i<k;i++) {
        int n;
        scanf("%d",&n);
        if(n!=0) push(n);
        else pop();
    }
    
    if(top==-1) printf("0");
    else {
        for(int i=0;i<=top;i++) total+=money[i];
        printf("%lld",total);
    }
    
}