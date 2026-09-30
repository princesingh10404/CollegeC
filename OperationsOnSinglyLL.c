#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;                                                                                                                                                                       

void insert(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = head;
    head = n;
}

void delete(int x) {
    struct Node *p = head, *q = NULL;

    while (p && p->data != x) {
        q = p;
        p = p->next;
    }

    if (!p) return;

    if (q) q->next = p->next;
    else head = p->next;

    free(p);
}

void display() {
    struct Node *p = head;
    while (p) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printf("Singly Linked List: ");
    display();

    delete(20);

    printf("After deletion: ");
    display();

    return 0;
}