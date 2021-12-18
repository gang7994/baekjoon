#include <stdio.h>
int main() {
    int n;
    double a, b;
    scanf("%d", &n);
    a = n *0.78;
    b = n - (n * 0.2 * 0.22);
    printf("%.0f %.0f", a, b);
    
}