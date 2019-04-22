// a problem of stack

#include<iostream>

using namespace std;

class st{

 int rear;
   int fr=0;
  int item,i=1,j=0;
public:

    //string operation;
    int arr[10][40];
    int poparr[10];

    int push(int item,int c)
    {
        fr++;
        arr[c][fr]=item;
        rear=fr;
       // cout<<"PUSH"<<arr[c][fr-1]<<endl;
    }

    int pop(int c)
    {
        fr--;
        int x=arr[c][fr];
        poparr[i]=x;
        cout<<"POP"<<poparr[i]<<"   i=  "<<i<<endl;
        i++;
    }

    int display(int c)
    {

        cout<<arr[c][rear]<<endl;
        rear--;

    }
};



int main()
{
   st ob[40],ob1;;
   int b,value,n;
   int d[10];

   string a;
   cin>>n;

       for(int i=1;i<=n;i++){
   cin>>a;

   if(a=="push"){
          cin>>b;
         cin>>value;
     ob[b].push(value,b);

   }

   if(a=="pop")
   {
       int k=0;
       k++;
       cin>>b;
       d[k]=b;
       ob[b].pop(b);
   }
       }
       cout<<"\n\n";
     for(int i=1;i<=n;i++){
       ob[d[i]].display(d[i]);
     }

}
