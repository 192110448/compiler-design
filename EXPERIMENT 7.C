#include <stdio.h>
#include <ctype.h>
#include <string.h>

char prod[10][10];
char first[10];
int n, k = 0;

void findFirst(char c)
{
    int i;
    if (!isupper(c))
        first[k++] = c;
    else
    {
        for (i = 0; i < n; i++)
            if (prod[i][0] == c)
                findFirst(prod[i][2]);
    }
}

int main()
{
    int i;
    char ch;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter productions (E=a):\n");
    for (i = 0; i < n; i++)
        scanf("%s", prod[i]);

    printf("Enter symbol to find FIRST: ");
    scanf(" %c", &ch);

    findFirst(ch);

    printf("FIRST(%c) = { ", ch);
    for (i = 0; i < k; i++)
        printf("%c ", first[i]);
    printf("}");

    return 0;
}

