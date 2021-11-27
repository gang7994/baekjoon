#include <stdio.h>

int people(int a, int b) {
    if(a == 0) return b;
    else if(b == 1) return 1;
    else {
        return people(a-1, b) + people(a, b-1);
    }
}

int main(void) {
    int t, k, n;
    scanf("%d", &t);
    for(int i=0; i<t;i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n",people(k,n));
    }
}