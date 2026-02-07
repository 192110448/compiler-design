#include <stdio.h>
#include <string.h>

int main()
{
    char prod[20], a[20], b[20];
    int i = 3, j = 0, k = 0;

    scanf("%s", prod);      // E=E+T|T

    while (prod[i] != '|')
        a[j++] = prod[i++];

    a[j] = '\0'; i++; j = 0;

    while (prod[i])
        b[j++] = prod[i++];

    b[j] = '\0';

    printf("After eliminating left recursion:\n");
    printf("E->%sE'\n", b);
    printf("E'->%sE'|e\n", a);

    return 0;
}

