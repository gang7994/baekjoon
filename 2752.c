#include <stdio.h>
int partition(int arr[], int left, int right){
    int pivot = arr[left];
    int low = left+1;
    int high = right;
    int temp;
    while(low <= high) {
        while(low <= right && pivot >= arr[low]) low++;
        while(high >= (left+1) && pivot <= arr[high]) high--;
        if(low <= high) {
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
    arr[left] = arr[high];
    arr[high] = pivot;
    return high;
}
void q_sort(int arr[], int left, int right) {
    if(left<right) {
        int pivot = partition(arr,left,right);
        q_sort(arr,left,pivot-1);
        q_sort(arr,pivot+1,right);
    }
}

int main() {
    int arr[3];
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    q_sort(arr,0,2);
    printf("%d %d %d",arr[0],arr[1],arr[2]);
}