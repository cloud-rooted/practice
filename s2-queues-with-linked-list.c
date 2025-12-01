#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *new = malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;

    if(rear == NULL) {
        front = rear = new;
    } else {
        rear->next = new;
        rear = new;
    }
}

void dequeue() {
    if(front == NULL)
        printf("Underflow\n");
    else {
        struct node *t = front;
        front = front->next;
        if(front == NULL) rear = NULL;
        free(t);
    }
}

void display() {
    struct node *t = front;
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
            case 1: scanf("%d",&val); enqueue(val); break;
            case 2: dequeue(); break;
            case 3: display(); break;
        }
    } while(ch != 0);

    return 0;
}
