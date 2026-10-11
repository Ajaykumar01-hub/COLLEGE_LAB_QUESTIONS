#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[MAX];
    int stack[MAX];
    int top = -1;
    int i, length, max = 0;
    printf("Enter parentheses string: ");
    scanf("%s", s);

    // Store base index
    stack[++top] = -1;
    for (i = 0;s[i] !='\0'; i++)
    {
        if (s[i] == '(')
        {
            stack[++top] = i;
        }
        else
        {
        top--;
            if (top == -1)
            {
                stack[++top] = i;
            }
            else
            {
                length = i - stack[top];

                if (length > max)
                    max = length;
            }
        }
    }
    printf("Longest valid parenthesis length = %d\n", max);
}
