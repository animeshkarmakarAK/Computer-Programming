#include<stdio.h>



int main()
{
    int  n;
   unsigned  int   r=1;
    scanf("%d",&n);
    while(n)
    {

       r*=n;
       printf("%u: \n",r);
       --n;
    }
   printf("%u",r);


}
