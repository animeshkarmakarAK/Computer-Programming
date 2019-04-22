#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1;
    int *p;
    p=&i;
    for( i=1;i<=9;i++)
    {
        printf("%d\n",*p);

    }
}
