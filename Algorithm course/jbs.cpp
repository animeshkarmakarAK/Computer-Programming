#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct job{
  char id;
  int dead;
  int profit;

};

bool comparison(job a,job b)
{
    return (a.profit>b.profit);
}

void printfJobSe(job arr[],int n)
{
    sort(arr,arr+n,comparison);

      for(int i=1;i<=n;++i){
        cout<<arr[i].id<<" "<<arr[i].dead<<" "<<arr[i].profit<<endl;
    }

    int result[n];
    int slot[n];

    for(int i=0;i<n;i++){
        slot[i]=false;

    }

    for(int i=0;i<n;i++)
    {

        for(int j=min(n,arr[i].dead)-1;j>=0;j--)
        {
            cout<<"\n\n\nminmmmmm:"<<min(n,arr[i].dead)<<endl;
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;

            }

        }
    }
    int sum=0,max;

    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<" ";
            sum=sum+arr[result[i]].profit;
        }
    }
    cout<<endl;
    cout<<"maximum weight: "<<sum;

}

int main()
{

    job arr[10];

          char ch;
          int d;
          int p;
         int  n=5;
         int t=1;
          for(int i=0;i<n;i++)
          {
              printf("Enter job %d: --id--time--profit--:",t++);

             cin>>ch>>d>>p;
              arr[i].id=ch;
              arr[i].dead=d;
              arr[i].profit=p;

          }

    printfJobSe(arr,n);

}
