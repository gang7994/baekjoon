#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=n-i-1;j!=0;j--) {
            printf(" ");
        }
        for(int j=(i+1)*2-1;j!=0;j--) {
            printf("*");
        }
        printf("\n");
    }
}