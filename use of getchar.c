#include<stdio.h>
#define MAX 100
#define COUNTBY  3
int main(void)
{
 int i,b=0;
 int a[MAX];

 for(i=1;i<=MAX;i++)
 {
     if(!(i%COUNTBY)){

     printf("\n%d %3d",b,i);
     b=b+1;}
     a[i]=i;
 }
 printf("\n\nMAXIMUM ITEM NUMBER IS:%d",a[MAX]);
}
