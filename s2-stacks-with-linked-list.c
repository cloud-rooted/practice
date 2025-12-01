#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x) {
    struct node *new = malloc(sizeof(struct node));
    new->data = x;
    new->next = top;
    top = new;
}

void pop() {
    if(top == NULL)
        printf("Underflow\n");
    else {
        struct node *t = top;
        top = top->next;
        free(t);
    }
}

void display() {
    struct node *t = top;
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}

int main() {
    int ch, val;

    do {
        scanf("%d", &ch);
        switch(ch) {
            case 1: scanf("%d", &val); push(val); break;
            case 2: pop(); break;
            case 3: display(); break;
        }
    } while(ch != 0);

    return 0;
}
