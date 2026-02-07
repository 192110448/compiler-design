#include <stdio.h>
#include <ctype.h>

int main()
{
    char id[50];
    int i, flag = 1;

    scanf("%s", id);

    if (!isalpha(id[0]) && id[0] != '_')
        flag = 0;

    for (i = 1; id[i] != '\0'; i++)
        if (!isalnum(id[i]) && id[i] != '_')
            flag = 0;

    if (flag)
        printf("Valid Identifier");
    else
        printf("Invalid Identifier");

    return 0;
}

