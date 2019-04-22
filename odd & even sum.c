#include<stdio.h>
int main(void)
{
    int a[100],i,j,n,t=0,s=0;

    printf("no of elements:");
    scanf("%d",&n);
    printf("insert element in array:");

    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);

        for(j=0;j<n;j++)
        {
            if(a[j]%2==0)
                t=t+a[j];

            else
                s=s+a[j];
        }

        printf("\nsum of even no::%d",t);
          printf("\nsum of odd no::%d",s);

          return 0;

}
