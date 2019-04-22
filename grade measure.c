#include<stdio.h>
#include<stdlib.h>

struct student{

char *first_name;
char *sur_name;

int roll;
float marks;
char *gra_de;

};


int main()
{
    struct student *p;
    int n,i;
    float x;

    printf("How many student:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

       printf("name\n.......\nfirst name:");
       scanf("%s  ",&p->first_name);
       printf("\nsurname");
       scanf("%s",&p->sur_name);

        printf("roll:");
        scanf("%d\n",&p->roll);


        printf("marks:");
        scanf("%f\n",&p->marks);

        x=p->marks;


            if(x<=100 && x>=80)
    p->gra_de ="A+";

     if(x<80 && x>=75)
    p->gra_de ="A";

     if(x<75 && x>=65)
    p->gra_de ="A-";

     if(x<65 && x>=60)
    p->gra_de ="B+";

     if(x<60 && x>=55)
    p->gra_de ="B";


         if(x<55 && x>=50)
    p->gra_de ="B-";


         if(x<55 && x>=50)
    p->gra_de ="C";


         if(x<50 && x>=45)
    p->gra_de ="D";


         if(x<45 && x>=40)
    p->gra_de ="E";



    else
        p->gra_de="F";
    }


        //marks_measurment( p,p->marks);
        show_grade(p,n);


    }





int show_grade(struct student *pt,int a)
{
    int k;
    printf("NAME            ROLL             GRADE");
    printf(".....           ......            ..... ");
    for(k=1;k<=a;k++)
    {
        printf("%s %s%10d%4f",pt->first_name,pt->sur_name,pt->roll,pt->gra_de);
    }
}
