#include<iostream>

int main()
{
   int k,m,current,temp1,temp2;
   unsigned long int n;
   std::cin>>n;
   current=n;

   for(int i=2;i<n;i++)
   {
       if(n%i==0)
       {
           m=n/i;
           k=m+i;
         if(current==k)
         {
             break;
         }


         if(current>k)
         {
             current=k;
             temp1=i;//store i
             temp2=m;//store m;
         }
       }
   }


   if(current==n)
    std::cout<<"-1"<<std::endl;//if no update of current
   else
    std::cout<<temp1<<temp2<<std::endl;
    return 0;
}
