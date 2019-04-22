#include<stdio.h>
int main(void)
{
    int i,j,n,k=1;
    printf("How many lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%sd",k);
        printf("\n");
    }
    getch();

}
