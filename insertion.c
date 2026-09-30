#include <stdio.h>
void InsertionSort(int arr[], int n){
    int i, key, j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,5);
    printf("Sorted array: ");
    display(arr,5);
    return 0;
}