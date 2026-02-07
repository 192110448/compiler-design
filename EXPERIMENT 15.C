#include <stdio.h>
#include <string.h>

char stack[20], ip[20];
int top = -1, i = 0;

char prec(char a, char b)
{
    if (a=='$' && b=='$') return '=';
    if (a=='$' || b=='(') return '<';
    if (b=='$' || a==')') return '>';
    if (a=='+' && b=='*') return '<';
    if (a=='*' && b=='+') return '>';
    if (a==b) return '>';
    return '<';
}

int main()
{
    char a, b;
    scanf("%s", ip);
    stack[++top] = '$';

    while (1)
    {
        a = stack[top];
        b = ip[i];

        if (a=='$' && b=='$')
        {
            printf("Accepted");
            break;
        }
        else if (prec(a,b) == '<')
            stack[++top] = ip[i++];
        else
            top--;
    }
    return 0;
}

