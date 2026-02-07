#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f;
    char ch;
    int chars=0, words=0, lines=0;

    f = fopen("input.txt","r");
    if(!f){ printf("File not found"); return 0; }

    while((ch=fgetc(f))!=EOF)
    {
        chars++;
        if(ch==' ' || ch=='\t' || ch=='\n') words++;
        if(ch=='\n') lines++;
    }
    fclose(f);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
}

