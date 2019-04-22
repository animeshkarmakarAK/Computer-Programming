#include<iostream>
#include<cstdio>

using namespace std;


class fruits{

public:
int  calori;
int weight;
int  ka_we;
float sign;

};
int main()
{
    fruits ob[40];
    int n,sum=0;
    cout<<"How many fruits:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nCalorie of"<<i<<"Fruit: ";
        cin>>ob[i].calori;
         cout<<"\nWeight of"<<i<<"Fruit: ";
        cin>>ob[i].weight;

        ob[i].ka_we=ob[i].calori/ob[i].weight;


        cout<<"ca per we:"<<ob[i].ka_we;
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-i;j++)
        {
            if(ob[j].ka_we>ob[j+1].ka_we)
            {
                swap(ob[j],ob[j+1]);
            }

            if(ob[j].ka_we==ob[j+1].ka_we)
            {
                if(ob[j].weight<ob[j+1].weight)
                {
                   swap(ob[j],ob[j+1]);
                }
            }
        }
    }

    cout<<"After sorting:"<<endl;

    for(int i=1;i<=n;i++)
    {
         printf("%10d",ob[i].calori);
    }

    cout<<endl;

     for(int i=1;i<=n;i++)
    {
         printf("%10d",ob[i].weight);
    }

        cout<<endl;

      for(int i=1;i<=n;i++)
    {
         printf("%10d",ob[i].ka_we);
    }


    for(int i=n;i>=1;i--)
    {
        sum=sum+ob[i].weight;
        //cout<<"\nsum="<<sum;
        if(sum<=20)
        {
            ob[i].sign=1;
        }

        if(sum>20)
        {
            sum=sum-20;
           ob[i].sign=float (ob[i].weight-sum)/float (ob[i].weight);
           for(int j=i-1;j>=1;j--)
           {
               ob[j].sign=int(0);
           }
           break;
        }
    }

cout<<endl;
for(int i=1;i<=n;i++)
{
     printf("%10.1f",ob[i].sign);
}

}




