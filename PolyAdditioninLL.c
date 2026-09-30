#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff, power;
    struct Node *next;
};

struct Node* createNode(int c, int p) {
    struct Node *n = malloc(sizeof(struct Node));
    n->coeff = c;
    n->power = p;
    n->next = NULL;
    return n;
}

void insert(struct Node **head, int c, int p) {
    struct Node *n = createNode(c, p);

    if (*head == NULL) {
        *head = n;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = n;
}

struct Node* add(struct Node *p, struct Node *q) {
    struct Node *result = NULL;

    while (p && q) {
        if (p->power == q->power) {
            insert(&result, p->coeff + q->coeff, p->power);
            p = p->next;
            q = q->next;
        }
        else if (p->power > q->power) {
            insert(&result, p->coeff, p->power);
            p = p->next;
        }
        else {
            insert(&result, q->coeff, q->power);
            q = q->next;
        }
    }

    while (p) {
        insert(&result, p->coeff, p->power);
        p = p->next;
    }

    while (q) {
        insert(&result, q->coeff, q->power);
        q = q->next;
    }

    return result;
}

void display(struct Node *p) {
    while (p) {
        printf("%dx^%d", p->coeff, p->power);
        if (p->next) printf(" + ");
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct Node *p = NULL, *q = NULL, *sum;

    insert(&p, 5, 2);
    insert(&p, 4, 1);
    insert(&p, 2, 0);

    insert(&q, 3, 2);
    insert(&q, 2, 1);
    insert(&q, 1, 0);

    printf("Polynomial 1: ");
    display(p);

    printf("Polynomial 2: ");
    display(q);

    sum = add(p, q);

    printf("Sum: ");
    display(sum);

    return 0;
}