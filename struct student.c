#include<stdio.h>//i have to find this code error & will be complrte that
#include<conio.h>
#include<string.h>
struct personal{

char name[10];
float  marks;
int roll;

};
int main(void)
{
    struct personal ob1[444];
    int n,i,j,d=1;
    char grade[95];
    char ch;

    printf("How many student:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            printf("student:: %d\n",d);
            d++;
    {
        for(i=0;i<12;i++)
        printf(".");
    }

    printf("\nNAME:");
    scanf("%s",&ob1[i].name);
    printf("ROLL:");
    scanf("%d",&ob1[i].roll);
    printf("MARKS:");
    scanf("%f",&ob1[i].marks);

        if(ob1[i].marks<=100 && ob1[i].marks>=80 )
        grade[i]='A+';
        else if(ob1[i].marks<=79 && ob1[i].marks>=75)
            grade[i]="A";
        else if(ob1[i].marks<=74 && ob1[i].marks>=70)
            grade[i]="A-";
        else if(ob1[i].marks<=69 && ob1[i].marks>=65)
            grade[i]="B+";
        else if(ob1[i].marks<=64 && ob1[i].marks>=60)
            grade[i]="B";
        else if(ob1[i].marks<=59 && ob1[i].marks>=55)
            grade[i]="B-";
        else if(ob1[i].marks<=54 && ob1[i].marks>=50)
        grade[i]="C+";
        else if(ob1[i].marks<=49 && ob1[i].marks>=45)
            grade[i]="C";
        else if(ob1[i].marks<=45 && ob1[i].marks>=40)
            grade[i]="D";
        else
            grade[i]="F";

    }

    //printf("NAME   ROLL   GRADE")
    for(j=1;j<=n;j++){
    printf("%4s %4d %4c",ob1[j].name,ob1[j].roll,grade[j]);}
        return 0;
}

