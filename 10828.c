#include <stdio.h>
#include <string.h>
int stack[10001] ={0,};
int top = -1;

void push(void) {
    int index;
    scanf("%d\n",&index);
    stack[++top] = index;
}

int pop(void) {
    if(top == -1) return -1;
    else {
        int res = stack[top];
        top--;
        return res;
    }
}

int size(void) {
    return top+1;
}

int empty(void) {
    if(top==-1) return 1;
    else return 0;
}

int peek(void) {
    if(top== -1) return -1;
    else return stack[top];
}

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        char command[10000] ={0,};
        scanf("%s",command);
        if(strcmp(command,"push")==0) {
            push();
        }
        else if(strcmp(command,"pop")==0) {
            printf("%d\n", pop());
        }
        else if(strcmp(command,"size")==0) {
            printf("%d\n", size());
        }
        else if(strcmp(command,"empty")==0) {
            printf("%d\n", empty());
        }
        else if(strcmp(command,"top")==0) printf("%d\n",peek());
    }
}