#include <stdio.h>
int main()
{
    int arr[50], i, n, max, sum=0;

    printf("enter the number of element:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array:[");

    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("]\n");

    for (int i = 0; i < n; i++){
        sum+=arr[i];

    }
    printf("sum:%d\n", sum);

    max = arr[0];

    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("greatest element %d\n", max);    
    return 0;
}