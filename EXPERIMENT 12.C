#include <stdio.h>
#include <string.h>

char ip[20];
int i = 0;

void E(); void Ep(); void T(); void Tp(); void F();

void match(char c)
{
    if (ip[i] == c) i++;
    else { printf("Invalid String"); exit(0); }
}

void E() { T(); Ep(); }

void Ep()
{
    if (ip[i] == '+')
    {
        match('+'); T(); Ep();
    }
}

void T() { F(); Tp(); }

void Tp()
{
    if (ip[i] == '*')
    {
        match('*'); F(); Tp();
    }
}

void F()
{
    if (ip[i] == 'i')
        match('i');
    else if (ip[i] == '(')
    {
        match('('); E(); match(')');
    }
    else
    {
        printf("Invalid String");
        exit(0);
    }
}

int main()
{
    scanf("%s", ip);
    E();
    if (ip[i] == '\0')
        printf("Valid String");
    else
        printf("Invalid String");
    return 0;
}

