#include <stdio.h>
#define MAX 50

int stack[MAX], top = -1;

void push(int x) {
    if(top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if(top == -1)
        printf("Underflow\n");
    else
        top--;
}

void display() {
    for(int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
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
