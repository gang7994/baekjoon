#include <stdio.h>
#include <string.h>

int top =-1;
int size;
int stack[101]={0,};

void push(int n) {
    top++;
    stack[top] =n;

}
int pop(int n) {
    int res = stack[top];
    if(res!=n||top==-1) return 0;
    top--;
    return 1;
}

int main() {
    char data[101];
    while(1) {
        gets(data);
        if(strlen(data)==1 && data[0]=='.') break;
        for(int i=0;i<strlen(data);i++) {
            if(data[i]=='[') push(2);
            else if(data[i]==']') {
                if(!pop(2)) {
                    top=-2;
                    break;
                }
            }
            else if(data[i]=='(') push(1);
            else if(data[i]==')') {
                 if(!pop(1)) {
                     top=-2;
                     break;
                 }
            }
            if(top<=-2) break;
        }
        if(top==-1) printf("yes\n");
        else printf("no\n");
        top =-1;
        int stack[101]= {0,};
    }
}