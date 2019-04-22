#include<bits/stdc++.h>

#define MAX 100
using namespace std;
class jobSequence{

public:

   int task;
   int deadline;
   int profit;

};

int main()
{
    jobSequence ob[MAX];
   int n;
   cout<<"\n\n\t\t\t No. of jobs:";
   cin>>n;
   if(n>MAX){
        cout<<"\nInvalid input\n";

   }
   else
   {

       for(int i=1;i<=n;i++){
       cin>> ob[i].task;
       cin>>ob[i].deadline;
       cin>>ob[i].profit;
       }
   }

   for(int i=1;i<=n;i++)

   {
       for(int j=1;j<=n-i;j++){

       if(ob[j].profit<ob[j+1].profit)
            swap(ob[j],ob[j+1]);


        if(ob[j].profit==ob[j+1].profit)
        {
            if (ob[j].task>ob[j+1].task)
                swap(ob[j],ob[j+1]);
        }

       }
   }
   cout<<"\n\n\t\t<After sort>\n";

  /* for(int i=1;i<=n;i++)
   {

       cout<<"\n\t"<<ob[i].task;
       cout<<"\t"<<ob[i].deadline;
       cout<<"\t"<<ob[i].profit;
   }*/
   sort(a,a+n,isgreater())

   cout<<"\n\n\t\t Maximum Deadline:";
 int max=ob[1].deadline;
 for(int i=2;i<=n;i++)
 {
     if(ob[i].deadline>max)
        max=ob[i].deadline;
 }

cout<<max;



int a[n];

memset(a,0,n-1);

for(int i=0;i<=max-1;i++)
{

    {
        for(int j=ob[i].deadline;j>1;j--){
        if(a[j]==0){
          a[j]=ob[i].profit;
          cout<<"\n\n"<<a[j];
          break;

        }

        }
    }
}


int profitsum=0;

for(int i=0;i<=max-1;i++)
{
    profitsum+=a[i];
}

cout<<"\n\n\t\t Total profit\n\t\t";

cout<<profitsum;
}
