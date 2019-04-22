#include<stdio.h>
#include<string.h>
int main(void)
{
    char f_n[10],s_n[10];
    char name[111],d[20];
    scanf("%s %s",f_n,s_n);
  strcat(f_n,s_n);
strcpy(name,f_n);

    printf("%s",name);

}

