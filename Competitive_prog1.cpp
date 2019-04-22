#include<iostream>
#include<math.h>

using namespace std;
class co_ordinate{
public:
    float x;
   float y;
   float dis[20];
   int i;

   co_ordinate()
   {
       i=0;
   }

   void  measureDistant(co_ordinate ob1,  co_ordinate ob2)
{
      i++;
    dis[i]=sqrt(pow(ob1.x-ob2.x,2)+pow(ob1.y-ob2.y,2));
    cout<<dis[i]<<endl;


}
int  sor_t()
{
    cout<<"dsfgrfhj"<<endl;
    for(int j=1;j<=4;j++){
        for(int k=j;k<=4;i++){
            if(dis[k]>dis[k+1])
                swap(dis[k],dis[k+1]);
        }
        cout<<dis[j]<<endl;
    }
}

int  cost()
{
    cout<<"bfdcds"<<endl;
    cout<<dis[1]+dis[2];
}

};

int main()
{
    co_ordinate ob[10],oob;

    int n;
    cout<<"No. of co-ordinate:";
    cin>>n;

    for(int i=1;i<=2*n;i++)
    {
        cin>>ob[i].x;
        cin>>ob[i].y;
    }

    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=i;j<=2*n-1;j++)
        {
          ob[1].measureDistant(ob[i],ob[j+1]);
        }

    }
    ob[1].sor_t();
    ob[1].cost();
   // return 0;

}
