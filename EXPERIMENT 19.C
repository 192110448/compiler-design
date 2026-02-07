#include <stdio.h>
#include <ctype.h>

char prod[10][10];
char lead[10];
int n, k=0;

void leading(char c)
{
    int i;
    for(i=0;i<n;i++)
        if(prod[i][0]==c)
        {
            if(!isupper(prod[i][2]))
                lead[k++] = prod[i][2];
            else
                leading(prod[i][2]);
        }
}

int main()
{
    int i;
    char ch;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",prod[i]);
    scanf(" %c",&ch);
    leading(ch);
    printf("LEADING(%c)={ ",ch);
    for(i=0;i<k;i++) printf("%c ",lead[i]);
    printf("}");
}

