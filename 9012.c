#include <stdio.h>
int top = -1;
void push() {
    top++;
}
void pop() {
    top--;
}
int vps(char str[]) {
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]=='(') push();
        else if(str[i]==')') pop();
        if(top<=-2) return 0;        
    }
    if(top==-1) return 1;
    else return 0;
}

int main(void) {
    int t;
    char data[51];
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%s",data);
        if(vps(data)) printf("YES\n");
        else printf("NO\n");
        top = -1;
    }
    
}