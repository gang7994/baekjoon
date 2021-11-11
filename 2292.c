#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int i=1, minus;
    while(1) {
        if(i==1&&n==1) {
            printf("%d",n);
            break;
        }
        if(i==1) minus=1;
        else if(i==2) minus=6;
        else minus+=6;
        n -= minus;
        if(i==1) {
            if(n-minus-5<=0) {
            printf("%d",i+1);
            break;
            }
        }
        else {
            if(n-minus-6<=0) {
            printf("%d",i+1);
            break;
            }
        }
        i++;
    }
}