#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j;
    double  arr[5];
    for(i=1;i<=4;i++)
    {
        scanf("%lf",&arr[i]);
    }
    for(j=4;j>=1;j--)
    {
        printf("\n%.4lf",sqrt(arr[j]));
    }
    return 0;
}
