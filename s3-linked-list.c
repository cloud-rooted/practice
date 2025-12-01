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
    new->next = NULL;

    if(head == NULL) return new;

    struct node *t = head;
    while(t->next != NULL) t = t->next;
    t->next = new;
    return head;
}

struct node* delete_start(struct node* head) {
    if(head == NULL) return NULL;
    struct node *t = head;
    head = head->next;
    free(t);
    return head;
}

void display(struct node* head) {
    struct node *t = head;
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
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
