#include <stdio.h>
#include <ctype.h>

int stack[50], top = -1;

void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }

int main() {
    char exp[50];
    int i = 0, a, b;

    scanf("%s", exp);

    while(exp[i] != '\0') {
        if(isdigit(exp[i]))
            push(exp[i] - '0');
        else {
            b = pop();
            a = pop();
            switch(exp[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
        i++;
    }

    printf("%d", pop());
}
