// codeforces problem no- 71A
// problem name- way too long words


#include<stdio.h>
int main(){

    char a[100];
    int len,tk;
    scanf("%d",&tk);
    while(tk--)
    {
        scanf("%s",&a);
        len = strlen(a);
        if(len>10)
        {
            printf("%c%d%c\n",a[0],len-2,a[len-1]);
        }
        else
            printf("%s\n",a);

    }
    return 0;
}
