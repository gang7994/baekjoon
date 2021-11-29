#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
    int r;
    scanf("%d",&r);
    double e_area = M_PI * pow(r,2);
    double t_area = 2 * pow(r,2);
    printf("%.6lf\n",e_area);
    printf("%.6lf",t_area);
}