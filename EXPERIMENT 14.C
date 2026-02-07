#include <stdio.h>
#include <string.h>

char stk[20], ip[20];
int i = 0, j = 0;

void check()
{
    if (stk[j-1] == 'i')
    {
        stk[j-1] = 'E';
        printf("Reduce E->i\n");
    }
    if (j >= 3 && stk[j-3]=='E' && stk[j-2]=='+' && stk[j-1]=='E')
    {
        j -= 2;
        stk[j-1] = 'E';
        printf("Reduce E->E+E\n");
    }
    if (j >= 3 && stk[j-3]=='E' && stk[j-2]=='*' && stk[j-1]=='E')
    {
        j -= 2;
        stk[j-1] = 'E';
        printf("Reduce E->E*E\n");
    }
}

int main()
{
    scanf("%s", ip);
    printf("Shift Reduce Parsing\n");

    while (ip[i] != '\0')
    {
        stk[j++] = ip[i++];
        stk[j] = '\0';
        printf("Shift %s\n", stk);
        check();
    }

    if (stk[0]=='E' && stk[1]=='\0')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}

