#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char arr[7];
    scanf("%s",arr);
    int len = strlen(arr);
    int sum = 0;
    for(int i=0;i<len;i++) {
        if(arr[i]-48 <= 9) sum += (arr[i]-48) * pow(16, len-1-i);
        else sum += (arr[i]-55) * pow(16, len-1-i);
    }
    printf("%d",sum);
}