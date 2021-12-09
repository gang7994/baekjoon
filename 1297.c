#include <stdio.h>
#include <math.h>
int main() {
    int d,h,w;
    scanf("%d %d %d",&d,&h,&w);
    float result = sqrt(pow(d,2) / (pow(h,2) + pow(w,2)));
    printf("%.f %.f",floor(result*h),floor(result*w));
}