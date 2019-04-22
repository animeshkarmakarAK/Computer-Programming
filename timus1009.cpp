#include<iostream>
#include<cstdio>
#include<cmath>

//using namespace std;

int main()
{
    int base,digitNo,index=0,y;
    int digit=0;
    int a[100];
    int aa[100][10];
    std::cin>>base;
    std::cin>>digitNo;
    int j=1;
    for(int i=1;i<pow(base,digitNo);i++)
    {
        digit=0;
         y=i;
        while(i!=0)
        {
            i=i/10;
            ++digit;
        }
        if(digit==digitNo)
        {
            a[j]=y;
           std:: cout<<"\n\n\t"<<a[j]<<std::endl;
            j++;
        }
    }

        for(int m=1;m<=j;m++)
        {
            int x=a[m];
            for(int l=1;l<=digitNo-1;l++)
            {
               aa[m][l]=x%10;
               x=x/10;

            }
            aa[m][digitNo]=x;
        }


    for(int m=1;m<=j;m++)
    {
        for(int l=1;l<=digitNo-1;l++)
        {
            if((aa[m][l] && aa[m][l+1])!=0)

                ++index;

        }
    }

    std::cout<<"\n\n\n\t\t"<<index<<std::endl;



}
