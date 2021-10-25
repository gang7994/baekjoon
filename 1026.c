#include <stdio.h>
void sort(int arr[],int n) { //정렬
    int temp;
    for(int i=0;i<n;i++){
        int j=i-1;
        while((arr[j] > arr[j+1])&&(j>=0)){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }
}
int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d",&b[i]);
    }
    sort(a,n);
    sort(b,n);
    for(int i=0;i<n;i++) {
        sum += a[i] * b[n-1-i];
    }
    printf("%d",sum);
    
}