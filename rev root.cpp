#include<iostream>
#include<cstdio>
#include<cmath>
int main(void)
{

    unsigned long long  arr[5];
    for(int i=1;i<=4;i++)
    {
       std:: scanf("%llu",&arr[i]);
    }
    for(int j=4;j>=1;j--)
    {
       std:: printf("\n%.4llu",sqrt(arr[j]));
    }
    return 0;
}

