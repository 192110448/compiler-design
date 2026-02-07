#include <stdio.h>
#include <stdlib.h>

char s[20]; int i=0;
void E();

void E()
{
    if (s[i]=='i') i++;
    else exit(0);

    if (s[i]=='+' || s[i]=='*')
    {
        i++;
        E();
    }
}

int main()
{
    scanf("%s", s);
    E();
    if (s[i]=='\0')
        printf("String is Accepted");
    else
        printf("String is Rejected");
    return 0;
}

