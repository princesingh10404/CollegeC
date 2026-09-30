#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *head = NULL;

void insert(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;
    n->prev = NULL;
    n->next = head;

    if (head) head->prev = n;
    head = n;
}

void delete(int x) {
    struct Node *p = head;

    while (p && p->data != x)
        p = p->next;

    if (!p) return;

    if (p->prev) p->prev->next = p->next;
    else head = p->next;

    if (p->next) p->next->prev = p->prev;

    free(p);
}

void display() {
    struct Node *p = head;

    while (p) {
        printf("%d <-> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printf("Doubly Linked List: ");
    display();

    delete(20);

    printf("After deletion: ");
    display();

    return 0;
}