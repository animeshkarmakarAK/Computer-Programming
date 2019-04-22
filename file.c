#include<stdio.h>


int main()
{
    FILE *song;
    if((song=fopen("myfile.txt","r")) != NULL ){
        printf("open file\n");
    }

    //fprint(song ,"Hellow world");
    fclose(song);
    return 0;
}
