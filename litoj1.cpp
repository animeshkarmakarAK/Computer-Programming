#include<iostream>

int main()
{
    int t,a[125],b[125];
    std::cin>>t;
    if(t<=125)
    {
        int i=1;
        while(i<=t)
        {
            std::cin>>a[i]>>b[i];
            i++;
        }
    }

        int i=1;
        while(i<=t)
     {
         if (a[i]&&b[i]<=10)

         std::cout<<"case"<<i+1<<": "<<a[i]+b[i]<<std::endl;
         i++;

     }
     return 0;


}
