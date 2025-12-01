#include <stdio.h>
#define MAX 50

int queue[MAX], front = 0, rear = -1;

void enqueue(int x) {
    if(rear == MAX - 1)
        printf("Overflow\n");
    else
        queue[++rear] = x;
}

void dequeue() {
    if(front > rear)
        printf("Underflow\n");
    else
        front++;
}

void display() {
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
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
