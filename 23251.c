#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++) scanf("%d",&arr[i]);
    for(int i=0;i<t;i++) printf("%d\n",arr[i]*23);
}