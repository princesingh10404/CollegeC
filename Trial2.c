#include <stdio.h>
int main(){

/*char f='r';
char g[]="cpp";
printf("the size of char is %zu ", sizeof(f));
printf("the size of %zu", sizeof(g));
*/
/*int a,b,c;
a=3,b=5,c=9;
printf("the sum of %d\n",a+b);
printf("the sum of %d\n",a-b);
printf("the sum of %d\n",a*b);
printf("the sum of %d\n",a++);
printf("the sum of %d\n",a--);
printf("the sum of %d\n",++a);
printf("the sum of %d\n",--a);*/
/*int myAge = 5;
int votingAge = 18;

printf("%d", myAge >= votingAge);*/
char arr[10];
for(int i=0; i<10; i++){
    printf("Enter the %d character", i+1);
    scanf("% c\n", &arr[i]);
}

    return 0;
}