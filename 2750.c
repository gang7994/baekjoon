#include <stdio.h>

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int low = left+1;
    int high = right;
    int temp;
    while(low <= high) {
        while(low <= right && pivot >= arr[low]) low++;
        while(high >= (left+1) && pivot <= arr[high]) high--;
        if(low < high) {
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
    arr[left] = arr[high];
    arr[high] = pivot;

    return high;
}
void quick_sort(int arr[], int left, int right) {
    if(left < right) {
        int pivot = partition(arr, left, right);
        quick_sort(arr, left, pivot-1);
        quick_sort(arr, pivot+1, right);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++) printf("%d\n",arr[i]);
}