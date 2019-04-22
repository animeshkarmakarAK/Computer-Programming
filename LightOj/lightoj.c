#include<stdio.h>
int main()
{
    int n=1,j,k;signed int a[125],b[125];
    n<=125;
    scanf("%d",&n);



          for(k=1;k<=n;k++){
        scanf("%d",&a[k]);
        scanf("%d",&b[k]);
          }
        for(j=1;j<=n;j++){
        if((a[j]<=10&&b[j]<=10)&&(a[j]!=b[j])&&(a[j]>=0&&b[j]>=0))
        printf("case%d:%d\n",j,a[j]+b[j]);

        }
    return 0;
}
