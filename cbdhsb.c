#include<stdio.h>
#include<conio.h>
#include<string.h>
struct personal{

char name[10];
int roll;
float marks;

};
int main(void)
{
    int n,i;
    char grade[10][20];
    struct personal ob1[555];
    printf("How many student:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("NAME:");
    scanf("%s",&ob1[i].name);
    printf("roll:");
    scanf("%d",&ob1[i].roll);
    printf("marks:");
    scanf("%f",&ob1[i].marks);

        if(ob1[i].marks<=100 && ob1[i].marks>=80 )
            strcpy( grade[i],"A+");
        else if(ob1[i].marks<=79 && ob1[i].marks>=75)
            strcpy(grade[i],"A");
        else if(ob1[i].marks<=74 && ob1[i].marks>=70)
            strcpy(grade[i],"A-");
        else if(ob1[i].marks<=69 && ob1[i].marks>=65)
            strcpy(grade[i],"B+");
        else if(ob1[i].marks<=64 && ob1[i].marks>=60)
           strcpy( grade[i],"B");
        else if(ob1[i].marks<=59 && ob1[i].marks>=55)
            strcpy( grade[i],"B-");
        else if(ob1[i].marks<=54 && ob1[i].marks>=50)
           strcpy(grade[i],"C+");
        else if(ob1[i].marks<=49 && ob1[i].marks>=45)
            strcpy(grade[i],"C");
        else if(ob1[i].marks<=45 && ob1[i].marks>=40)
            strcpy(grade[i],"D");
        else
            strcpy(grade[i],"F");






    }
    printf("  NAME  ROLL  GRADE" );
    printf("\n  ....  ....  .....");
    for(i=0;i<n;i++){
    printf("\n%4s %4d %4s\n",ob1[i].name,ob1[i].roll,grade[i]);}
//    return 0;
}

