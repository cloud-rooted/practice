#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* insert_end(struct node* head, int x) {
    struct node *new = malloc(sizeof(struct node));
    new->data = x;

    if(head == NULL) {
        head = new;
        new->next = head;
        return head;
    }

    struct node *t = head;
    while(t->next != head) t = t->next;
    t->next = new;
    new->next = head;
    return head;
}

struct node* delete_start(struct node* head) {
    if(head == NULL) return NULL;

    struct node *t = head;
    if(head->next == head) {
        free(head);
        return NULL;
    }

    struct node *last = head;
    while(last->next != head) last = last->next;
    head = head->next;
    last->next = head;
    free(t);
    return head;
}

void display(struct node* head) {
    if(head == NULL) return;
    struct node *t = head;
    do {
        printf("%d ", t->data);
        t = t->next;
    } while(t != head);
}

int main() {
    int n, val;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &val);
        head = insert_end(head, val);
    }

    display(head);
    head = delete_start(head);
    printf("\nAfter deletion:\n");
    display(head);

    return 0;
}
