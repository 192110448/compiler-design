#include <stdio.h>
#include <string.h>

int main()
{
    char prod[20], a[20], b[20];
    int i = 3, j = 0;

    scanf("%s", prod);      // A=ab|ac

    while (prod[i] == prod[i+3])
        a[j++] = prod[i++];

    a[j] = '\0';

    printf("After left factoring:\n");
    printf("A->%sA'\n", a);
    printf("A'->%s|%s\n",
           prod + i,
           prod + i + 3);

    return 0;
}

