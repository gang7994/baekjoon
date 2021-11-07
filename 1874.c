#include <stdio.h>
int top = -1;
int stack[100000];

void push(int n) {
    stack[++top] = n;
}
void pop() {
    top--;
}

int main(void) {
    int n;
    int arr[100000];
    char res[100001];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int number = 1;
    int j=0; int k =0;
    while(1) {
        if(top==-1 || stack[top] < arr[j] ) {
            push(number++);
            res[k++] = '+';
        }
        else if(stack[top] == arr[j++]) {
            pop();
            res[k++] ='-';
        }
        else {
            printf("NO");
            return 0;
        }
        if(n*2 == k) break;
    }
    for(int i=0;i<k;i++) printf("%c\n",res[i]);

}