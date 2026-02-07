#include <stdio.h>
#include <string.h>

int main()
{
    char e[20];
    int i, t = 1;

    scanf("%s", e);

    for (i = 0; e[i]; i++)
        if (e[i]=='+'||e[i]=='-'||e[i]=='*'||e[i]=='/')
        {
            printf("t%d = %c %c %c\n",
                   t++, e[i-1], e[i], e[i+1]);
            e[i+1] = 't';
        }
    return 0;
}

