/*#include<stdio.h>//

int main()
{
    int ch,n=0;
    do{
    scanf("%d",&ch);
    printf("%c",ch);
    }while(ch!='\t');

    do{
        n++;
          // scanf("%d",&ch);
    printf("%d=%c\n",n,n);
    }while(n!=300);


}


//program to sum a series.........SOMETHINH DIFFERENT ..pls! see

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
long int factorial(int n);
void main()
{
 int n,i;
 float s,r;
 char c;
system("cls");
 repeat : printf("You have this series:- 1/1! + 2/2! + 3/3! + 4/4! ...");
 printf("To which term you want its sum?  ");
 scanf("%d",&n);
 s=0;
 for (i=1;i<=n;i++)
  {   s=s+((float)i/(float)factorial(i)); }
 printf("The sum of %d terms is %f",n,s);
 fflush(stdin);
 printf ("Do you want to continue?(y/n):-  ");
 scanf("%c",&c);
 if (c=='y')
  goto repeat;
 getch();
}

long int factorial(int n)
 {
  if (n<=1)
	return(1);
  else
	n=n*factorial(n-1);
	return(n);
 }*/

#include<stdio.h>
int main()
{
    int n = 3;
    int i;
    for(i = 0; i <= n; i++)
    {
    printf("i");
    }
}









