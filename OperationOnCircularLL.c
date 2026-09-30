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

    if (!head) {
        head = n;
        n->next = head;
        return;
    }

    struct Node *p = head;
    while (p->next != head)
        p = p->next;

    p->next = n;
    n->next = head;
}

void delete(int x) {
    if (!head) return;

    struct Node *p = head, *q = NULL;

    do {
        if (p->data == x) break;
        q = p;
        p = p->next;
    } while (p != head);

    if (p->data != x) return;

    if (p == head) {
        if (head->next == head)
            head = NULL;
        else {
            struct Node *last = head;
            while (last->next != head)
                last = last->next;
            head = head->next;
            last->next = head;
        }
    } else {
        q->next = p->next;
    }

    free(p);
}

void display() {
    if (!head) return;

    struct Node *p = head;
    do {
        printf("%d -> ", p->data);
        p = p->next;
    } while (p != head);

    printf("(HEAD)\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printf("Circular Linked List: ");
    display();

    delete(20);

    printf("After deletion: ");
    display();

    return 0;
}