/*#include <stdio.h>

void Bubblesort(int arr[], int n){
    int i, j, temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    Bubblesort(arr,10);
    printf("Sorted array: ");
    display(arr,10);
    return 0;
}*/

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
}*/
