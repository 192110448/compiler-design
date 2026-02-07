#include <stdio.h>
#include <string.h>
#include <ctype.h>

char prod[10][10];
char follow[10];
int n, k = 0;

void findFollow(char c)
{
    int i, j;
    if (prod[0][0] == c)
        follow[k++] = '$';

    for (i = 0; i < n; i++)
        for (j = 2; prod[i][j] != '\0'; j++)
            if (prod[i][j] == c)
            {
                if (prod[i][j + 1] != '\0')
                    follow[k++] = prod[i][j + 1];
                else
                    findFollow(prod[i][0]);
            }
}

int main()
{
    int i;
    char ch;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter productions (E=aB):\n");
    for (i = 0; i < n; i++)
        scanf("%s", prod[i]);

    printf("Enter symbol to find FOLLOW: ");
    scanf(" %c", &ch);

    findFollow(ch);

    printf("FOLLOW(%c) = { ", ch);
    for (i = 0; i < k; i++)
        printf("%c ", follow[i]);
    printf("}");

    return 0;
}

