#include<stdio.h>
int main(void)
{
    int n,s,p,t,remainder;
    int a[100],b[100];
printf("enter no:");
scanf("%d",&n);
       int i=0;
       while(n!=0){
       remainder=n%10;
       a[i++]=remainder;
       n=n/10;

    }
    int j;
    for( j=0;j<i;j++){
        printf("%d\n",a[j]);
    }
   int k=0;
    while(i){
        b[--i]=a[k++];

    }
    int l;
    for( l=0;l<i;l++){
            printf("a=%d  b=%d\n",a[l],b[l+1]);
        if(a[l]!=b[l]){
            printf("this is not palindrome number\n");
            break;
        }
        else{
            printf("this is  palindrome number\n");
        }
    }
     // printf("total  %d",n);
}
