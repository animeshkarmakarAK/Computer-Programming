#include<stdio.h>       //here a function is used "kbhit()"  means keyboard hit
#include<conio.h>
int main(void)
{
    double amount;
    amount=0.20;
    printf("5% TAX TABLE:\n\n\r");
    printf("PRESS A KEY TO STOP.\n\n\r");
    do{

        printf("amount:%10f    tax: %4f\n\r",amount,amount*0.05);
        if(!kbhit())
            break;
        amount=amount+20;
    }while(amount<150);
   return 0;
}
