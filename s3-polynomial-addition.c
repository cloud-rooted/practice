#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff, pow;
    struct node *next;
};

struct node* insert(struct node* head, int c, int p) {
    struct node* new = malloc(sizeof(struct node));
    new->coeff = c;
    new->pow = p;
    new->next = NULL;

    if(head == NULL) return new;

    struct node* t = head;
    while(t->next != NULL) t = t->next;
    t->next = new;
    return head;
}

struct node* add(struct node* p1, struct node* p2) {
    struct node *res = NULL;

    while(p1 != NULL && p2 != NULL) {
        if(p1->pow == p2->pow) {
            res = insert(res, p1->coeff + p2->coeff, p1->pow);
            p1 = p1->next;  p2 = p2->next;
        }
        else if(p1->pow > p2->pow) {
            res = insert(res, p1->coeff, p1->pow);
            p1 = p1->next;
        }
        else {
            res = insert(res, p2->coeff, p2->pow);
            p2 = p2->next;
        }
    }

    while(p1 != NULL) { res = insert(res, p1->coeff, p1->pow); p1 = p1->next; }
    while(p2 != NULL) { res = insert(res, p2->coeff, p2->pow); p2 = p2->next; }

    return res;
}

void display(struct node* p) {
    while(p != NULL) {
        printf("%dx^%d ", p->coeff, p->pow);
        p = p->next;
    }
}

int main() {
    struct node *p1 = NULL, *p2 = NULL, *res = NULL;
    int n, c, p;

    scanf("%d", &n);
    for(int i=0;i<n;i++) { scanf("%d %d", &c, &p); p1 = insert(p1, c, p); }

    scanf("%d", &n);
    for(int i=0;i<n;i++) { scanf("%d %d", &c, &p); p2 = insert(p2, c, p); }

    res = add(p1, p2);
    display(res);
}

