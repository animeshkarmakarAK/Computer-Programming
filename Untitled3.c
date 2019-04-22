#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,r;
    int fac_n=1,fac_r=1,fac_n_r=1,factorial;
    printf("n=");
    scanf("%d",&n);
    printf("r=");
    scanf("%d",&r);
    for(i=n;i>1;i--)
    {
        fac_n=fac_n*i;
    }
        printf("\nfac_n=%d",  fac_n);


      for(i=r;i>1;i--)
    {
        fac_r=fac_r*i;
    }
    printf("\nfac_r=%d",  fac_r);




      for(i=n-r;i>1;i--)
    {
        fac_n_r=fac_n_r*i;
    }
        printf("\nfac_n-r=%d",  fac_n_r);
    factorial=fac_n/(fac_r*fac_n_r);
    printf("\n   n!/!{n-r)=%d",factorial);



}
