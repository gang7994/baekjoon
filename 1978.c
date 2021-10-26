#include <stdio.h>
int prime(int arr[], int len) {
    int count = len;
    for(int i=0;i<len;i++) {
        if(arr[i]==1) count--;
        for(int j=2;j<arr[i];j++) {
            if(arr[i]%j==0) {
                count--;
                break;
            }
        }
    }
    return count;
}

int main() {
    int count;
    scanf("%d",&count);
    int arr[count];
    int cnt = count;
    for(int i=0;i<count;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",prime(arr,count));
}
