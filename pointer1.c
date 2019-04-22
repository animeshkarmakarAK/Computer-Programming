#include<stdio.h>
int f(char *p);
int main()
{
    int i=0;
    char ptr[]="ansi";
    char *n=ptr;
    printf("%c%c%c",*n,*n++,*n++);

   /* for(n;n!=0;n++)
    {
        printf("%c",*n);
        printf("\n");
    }*/
    int x[5]={1,2,3};
    printf("%d\n\n",x[0]);
    printf("%d",f(ptr));
    }
int f(char *p)
{
    char *q=p;
    while(*++p)
        return (p-q);

}
