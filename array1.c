#include<stdio.h>//try it again//search a no which is a sum of two no in array
#include<stdlib.h>

int main()
{
    int arr[50];
    int i,value,j,a,n,k;
    char ch;
    do{
    arr[50]=(int)malloc(sizeof(int));
    printf("\ncontinue?\npress y");

    scanf("%c",&ch);
    printf("\n enter no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("\nwhat value you search for");
    scanf("%d",&value);

    for(j=0;j<n;i++){
        for(k=j;k<n;k++)

    {
        if(arr[j]<value)
        {
            if(arr[j]+arr[k+1]==value){
                //return 1;
            printf("the sum of value is at %d %d",j,k+1);
            }
        }
        if(arr[j]==value)
        {
            printf("at %d=%d+0",j,arr[j]);
        }
        if(arr[j]>value)
        {
            printf("impossible");
        }

    }
    }

}while(ch!='n');
}
