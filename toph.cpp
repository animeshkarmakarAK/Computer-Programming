#include<iostream>//this code is not completed


using namespace std;

struct road{

int data;
struct road *next;
struct road *bac_k;

}*start;

int main()
{

    road *lis_t,*current,*temp,*temp1,*temp2,*new_node;
    int n,item;
    cout<<"How many Roads:";
    cin>>n;

    for(int i=1;i<=n*2;i++)
    {
        cin>>item;
        new_node=new(road);
      new_node->data=item;
       new_node->next=NULL;
       new_node->bac_k=NULL;

        if(start==NULL)

        {
            start=new_node;
           current=new_node;
        }

        else{
            current->next=new_node;
            new_node->bac_k=current;
            current=new_node;

        }
    }


    cout<<"\n Showing conncted roads:"<<endl;

        temp=start;
    for(int i=1;i<=2*n;i++)
    {
        cout<<temp->data;
        temp=temp->next;

    }

    cout<<"\n\n Find the unconnected roads:"<<endl;

    temp1=temp2=start;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=2*n;j<=2*n-i-1;i++)
        {
           if(temp2->data!=temp->next->data)
           {
               if((temp1->next==&temp->next->data) || (temp1->next->bac_k==&temp->data))
               {
                   cout<<"connected"<<endl;
               }

               else {

                cout<<temp1->data;
                temp1=temp1->next;
                cout<<"  " <<temp1;
               }
           }
        }
    }


}
