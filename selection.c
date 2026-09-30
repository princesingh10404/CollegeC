#include <stdio.h>
void Selectionsort(int arr[], int n){
    int i, j, min_idx, temp;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
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
    Selectionsort(arr,5);
    printf("Sorted array: ");
    display(arr,5);
    return 0;
}