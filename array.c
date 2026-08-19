#include <stdio.h>
int main(){
char arr[11];
for(int i=0; i<11; i++){
    printf("Enter the %d character:", i+1);
    scanf(" %c", &arr[i]);
}
for(int j=0;j<11;j++)
{
    printf("%c",arr[j]);
}

    return 0;
}