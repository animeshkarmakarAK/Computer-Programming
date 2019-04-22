#include<stdio.h>
#include<string.h>
int main()

{
float second_no,first_no,c;

  char single_character;
    char str[14];
    scanf("%s",str);


  if(!strcmp(str,"char")){
    for(; ;){

    printf("Enter single character:");
    scanf("%d",&single_character);

    if(kbhit()=='E')
            break;

    printf("%c",single_character);


    }}
    if(!strcmp(str,"add"))
    {
        for(; ;){
                  printf("1st  no:");
        scanf("%f",&first_no);
        printf("2nd no:");
        scanf("%f",&second_no);

        c=first_no+second_no;

        printf("%f+%f=%f",first_no,second_no,c);
        }
    }
}
