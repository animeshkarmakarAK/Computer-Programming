/**Function Knackshap problem**/


#include<iostream>
#include<cstdio>

using namespace std;


class fruits{

public:
int  calori;
int weight;
int  ka_per_we;
float sign;

};
int main()
{
    fruits ob[40],obcopy[40];
    int n,sum=0;
    cout<<"How many fruits:";  //various items of fruits
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nCalorie of"<<i<<"Fruit: ";
        cin>>ob[i].calori;
         cout<<"\nWeight of"<<i<<"Fruit: ";
        cin>>ob[i].weight;

        ob[i].ka_per_we=ob[i].calori/ob[i].weight;//measurement of calorie of fruits in per weight to look up which
                                                    //fruit gives the maximum calorie .this is important

       // cout<<"ca per we:"<<ob[i].ka_per_we;
    }

    cout<<"\ncopy\n";
for(int i=1;i<=n;i++)
{
        obcopy[i]=ob[i];  //copy objects to another object to sort elements bt we can show this in our input serial

}

    for(int i=1;i<=n;i++)  //Sorting object in object array base on calorie per weight
    {
        for(int j=i;j<=n-i;j++)
        {
            if(ob[j].ka_per_we>ob[j+1].ka_per_we)
            {
                swap(ob[j],ob[j+1]);
            }

           else if(ob[j].ka_per_we==ob[j+1].ka_per_we)
            {
                if(ob[j].weight<ob[j+1].weight)
                {
                   swap(ob[j],ob[j+1]);
                }
            }
        }
    }

    cout<<"Results of taking fruits\n............."<<endl;

    for(int i=1;i<=n;i++)
    {
         printf("%10d",obcopy[i].calori);
    }

    cout<<endl;

     for(int i=1;i<=n;i++)
    {
         printf("%10d",obcopy[i].weight);
    }

        cout<<endl;

      for(int i=1;i<=n;i++)
    {
         printf("%10d",obcopy[i].ka_per_we);
    }


    for(int i=n;i>=1;i--)
    {
        sum=sum+ob[i].weight;
        //cout<<"\nsum="<<sum;
        if(sum<=20)
        {
            ob[i].sign=1;
        }

        if(sum>20)   //CONDITION::Total fruits weight must be equal or less 20
        {
            sum=sum-20;
           ob[i].sign=float (ob[i].weight-sum)/float (ob[i].weight);
           for(int j=i-1;j>=1;j--)
           {
               ob[j].sign=0.0;  //Give sign which we can see in output 4th line
           }
           break;
        }
    }

cout<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=2;j<=n;j++)
    {
        if(obcopy[i].calori==ob[j].calori)
        {
            obcopy[i].sign=ob[j].sign;
        }
    }
}
    for(int i=1;i<=n;i++){

     printf("%10.1f",obcopy[i].sign);
    }

    cout<<"\n\n";
int sum1=0;
    for(int i=1;i<=n;i++){
if(obcopy[i].sign>0.0)
{
    if(obcopy[i].sign==0.0)
    {
            sum1+=obcopy[i].calori;

    }
    else
       sum1+= obcopy[i].sign*obcopy[i].calori;

}

}
cout<<"Taken Total Calorie : "<<sum1<<endl;  //sum of total calorie of taken FRuits

}





