#include <stdio.h>
#include <string.h>

struct sym
{
    char name[10], type[10];
};

struct sym s[10];
int n = 0;

void insert()
{
    scanf("%s%s", s[n].name, s[n].type);
    n++;
}

void search()
{
    char key[10];
    int i;
    scanf("%s", key);
    for (i = 0; i < n; i++)
        if (strcmp(s[i].name, key) == 0)
        {
            printf("Found");
            return;
        }
    printf("Not Found");
}

void display()
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s\t%s\n", s[i].name, s[i].type);
}

int main()
{
    int ch;
    while (1)
    {
        scanf("%d", &ch);
        if (ch == 1) insert();
        else if (ch == 2) search();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}

