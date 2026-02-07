#include <stdio.h>
#include <string.h>

int main()
{
    char exp[20];
    int i, t=1;

    scanf("%s", exp);

    for(i=0; exp[i]; i++)
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
        {
            printf("t%d = %c %c %c\n", t++, exp[i-1], exp[i], exp[i+1]);
            exp[i+1] = 't';
        }
    return 0;
}

