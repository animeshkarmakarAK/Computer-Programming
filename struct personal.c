#include<stdio.h>
#include<conio.h>
#include<string.h>
struct personal{

char name[1];
char j_date[10];
float salary;

};
int main(void)
{
    int n,i;
    struct personal ob1[555];
    printf("How many student:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("NAME:");
    scanf("%[a-Az-Z]",ob1[i].name);
    printf("JOINING DATE:");
    scanf("%s",&ob1[i].j_date);
    printf("SALARY:");
    scanf("%f",&ob1[i].salary);}
    for(i=1;i<=n;i++){
    printf("\n%4s %4s %4f",ob1[i].name,ob1[i].j_date,ob1[i].salary);}
//    return 0;
}
