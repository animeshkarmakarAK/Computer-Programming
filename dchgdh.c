#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=2;i<10;i++)
        for(j=2;j<i;j++)
        if(i%j!=0)
            printf("%d",i);
}
