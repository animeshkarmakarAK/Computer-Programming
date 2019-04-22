#include<stdio.h>


int main(void)
{
    int n,s,p,t;
    printf("%d",1%10);
printf("enter no:");
scanf("%d",&n);

//checkPalindrome(n);
    {
        s=n/100;
        t=s%100;
        p=t%10;
        if(s==p){

            printf("%d palindrome\n",n);}

    }
      printf("total  %d",n);
}
