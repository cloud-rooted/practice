#include <stdio.h>
#define MAX 50

int cq[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if((rear + 1) % MAX == front)
        printf("Overflow\n");
    else {
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = x;
    }
}

void dequeue() {
    if(front == -1)
        printf("Underflow\n");
    else if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void display() {
    if(front == -1) return;

    int i = front;
    while(1) {
        printf("%d ", cq[i]);
        if(i == rear) break;
        i = (i + 1) % MAX;
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
