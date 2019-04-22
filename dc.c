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
    int n,i,d=1;
    char grade[10][20],last_name[10];
    struct personal ob1[555];
    printf("How many student:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\nstudent no::%d",d);
    printf("NAME:");
    scanf("%s %s",ob1[i].name,last_name);
    strcat(ob1[i].name,last_name);
    }


      for(i=0;i<n;i++){
    printf("student no::%d",d);
    printf("roll:");

    scanf("%d",&ob1[i].roll);}
    d=1;

    printf("\nmarks:");
    printf("\n.......");
      for(i=0;i<n;i++){
            printf("\n%d==",d);
      d++;
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
    printf("  NAME       ROLL  GRADE" );
    printf("\n  ....     ....    .....");
    for(i=0;i<n;i++){
    printf("\n%4s %10d %6s\n",ob1[i].name,ob1[i].roll,grade[i]);}
   return 0;
}


