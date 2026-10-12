
#include <stdio.h>
#include <ctype.h>

int stack[100], top = -1;

int push(int x) {
    if (top == 99)
        return 0;

    stack[++top] = x;
    return 1;
}

int pop(int *x) {
    if (top == -1)
        return 0;

    *x = stack[top--];
    return 1;
}

int main() {
    char exp[100];
    int i, a, b, result;

    printf("Enter postfix expression: ");

    if (scanf("%s", exp) != 1)
        return 1;

    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit((unsigned char)exp[i])) {
            if (!push(exp[i] - '0')) {
                printf("Stack overflow\n");
                return 1;
            }
        } else {
            if (!pop(&b) || !pop(&a)) {
                printf("Invalid postfix expression\n");
                return 1;
            }

            if (exp[i] == '+')
                result = a + b;
            else if (exp[i] == '-')
                result = a - b;
            else if (exp[i] == '*')
                result = a * b;
            else if (exp[i] == '/') {
                if (b == 0) {
                    printf("Division by zero is not allowed\n");
                    return 1;
                }
                result = a / b;
            } else {
                printf("Invalid operator\n");
                return 1;
            }

            if (!push(result)) {
                printf("Stack overflow\n");
                return 1;
            }
        }
    }

    if (top != 0) {
        printf("Invalid postfix expression\n");
        return 1;
    }

    printf("Result = %d\n", stack[top]);

    return 0;
}
