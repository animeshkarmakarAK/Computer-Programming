#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a[100],i=0;
     int   year;
     int lowerBound;

     int base =10;
     int age;
    int tempBase=base+1;
   if( scanf("%d %d",&year, &lowerBound)>=10);

   while(1)
   {
       int temp=year/tempBase;
       int clowerBound=year%tempBase;
      // if((temp>=0 && temp<=9)&& (clowerBound>=0 && clowerBound<=9))
       if((temp && clowerBound)>=0 && (temp&& clowerBound)<=9)
       {
            age=temp*10+clowerBound;
            cout<<"AGE=="<<age<<endl;
            //a[i]=age;
          //if(a[i]>a[i-1])
           // swap(a[i],a[i-1]);
            if(age>=lowerBound ){
                //cout<<"\n\n\n\t\t"<<tempBase<<endl;
            a[i++]=tempBase;
            tempBase++;
        }
           else
            break;

       }
else
    break;


   }

   std::cout<<"\n\n\n\t\t"<<a[i-1];


}
