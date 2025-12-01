#include <stdio.h>
#include <ctype.h>

char stack[50];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int prec(char x) {
    if(x == '^') return 3;
    if(x == '*' || x == '/') return 2;
    if(x == '+' || x == '-') return 1;
    return 0;
}

int main() {
    char infix[50], postfix[50];
    int i = 0, j = 0;
    scanf("%s", infix);

    while(infix[i] != '\0') {
        if(isalnum(infix[i]))
            postfix[j++] = infix[i];
        else if(infix[i] == '(')
            push(infix[i]);
        else if(infix[i] == ')') {
            while(stack[top] != '(')
                postfix[j++] = pop();
            pop(); // remove '('
        }
        else {
            while(top != -1 && prec(stack[top]) >= prec(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
        i++;
    }

    while(top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
    printf("%s", postfix);
}
