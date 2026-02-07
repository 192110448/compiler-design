#include <stdio.h>
#include <ctype.h>

char p[10][10], t[10]; int n, k=0;

void trail(char c){
    for(int i=0;i<n;i++)
        if(p[i][0]==c){
            int len = strlen(p[i]);
            if(!isupper(p[i][len-1])) t[k++] = p[i][len-1];
            else trail(p[i][len-1]);
        }
}

int main(){
    char ch; int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",p[i]);
    scanf(" %c",&ch);
    trail(ch);
    printf("TRAILING(%c)={ ",ch);
    for(i=0;i<k;i++) printf("%c ",t[i]);
    printf("}");
}

