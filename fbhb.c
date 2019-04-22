#include<stdio.h>////   THIS PROGRAM IS NOT COMPLETE;HAVE SOME WRONG
#include<conio.h>
int main(void)
{
    int push();
    int pop();
    int a[10];
    int i,n,item;
    printf("No of elements:");
    scanf("%d",&n);
   // clrscr();

    printf("Enter your array elements:");
    for(i=1;i<=n;i++){

    scanf("%d",&a[i]);}


    for(; ;)
    {
        printf("1.insert\n2.delete\n3.Exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            int push(int a[],int n);
        }
        if(n==2)
        {
            int pop(int a[],int n);
        }
        if(n==3)
            break;
    }
}


int push( int z[100],int k)
{
    int x[34],y;
    x=a;
    y=n;
    int item,i;
    printf("Enter no;");
    scanf("%d",&item);
    for(i=y;i>=1 ;i--)
    {
      x[i+1]=x[i];
    }
    x[1]=item;
    y++;
    for(i=1;i<=y;i++)
    {
        printf("%d",x[i]);
    }
    return (x,y);
}
