#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *head = NULL;

void insertBeginning()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("memeory oveflow\n");
        return;
    }
    printf("enter the data: ");
    scanf("%d", &temp->info);

    temp->link = head;
    head = temp;
}

void display()
{
    struct node *ptr=head;
    if(head==NULL){
        printf("list is empty: ");
        return;
    }
    while(ptr!=NULL){
        printf("%d->",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");
}

int main(){
    insertBeginning();
    insertBeginning();
    insertBeginning();
    insertBeginning();

    display();
    return 0;
}


