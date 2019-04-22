#include<bits/stdc++.h>

using namespace std;

struct job{

int jobNo;
int profit;
int dead;

};

bool comp(job a,job b){

return a.profit>b.profit;

}

void printJob(job a[],int n){

sort(a,a+n,comp);

for(int i=1;i<=n;++i){
    printf("\n\t%d\t%d\t%d",a[i].jobNo,a[i].dead,a[i].profit);
}

int result[100];
int slot[100];
int maxdead;
cout<<"\n Max deadline:";
   int temp=0;
       for(int i=1;i<=n;i++){
        if(a[i].dead>temp){
           temp=a[i].dead;
        }
       }
       cout<<temp;

       for(int i=1;i<=maxdead;++i){
        slot[i]=-1;
        result[i]=0;
       }
         int sum =0;
       for(int i=1;i<=n;++i){
        for(int j=min(a[i].dead,maxdead);j>0;j--){
            if(slot[j]==-1){
                slot[j]=i;
                sum+=a[i].profit;
                result[j]=i;
                break;
            }
        }
       }

       cout<<"\nRequired jobs:\n";
       for(int i=1;i<=n;++i){
        cout<<slot[i]<<"->";
       }

       cout<<"\nTotal profit : ";

      // int sum=0;
      // for(int i=1;i<=n;++i){
        // sum+=a[result[i]].profit;
       //}
        cout<<sum;


}

int main()
{
    int n;
    cout<<"no. of jobs:";
    cin>>n;

    job j[n+1];

    printf("\tjob\t\tdeadline\tprofit\n");

    for(int i=1;i<=n;++i){
        int jn,d,p;
        scanf("\n\t%d\t\t%d\t%d",&jn,&d,&p);
        j[i].jobNo=jn;
        j[i].dead=d;
        j[i].profit=p;

    }

    printJob(j,n);


}
