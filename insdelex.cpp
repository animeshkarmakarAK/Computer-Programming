#include<iostream>
using namespace std;

  class arr_ay{

  int a[100];

  public:
      int k,d=0;

      int ins(int ar[100])
      {

          d++;
          cin>>a[d];
      }

      int del()
      {

          cout<<"where you want to delete:";
          cin>>k;
          if(k>d)
            cout<<"\nno item in this position\n";

          else {

          for(int i=k;i<d;i++)
          {
              a[i]=a[i+1];
          }

          d--;
          }

      }

      int display()
      {
          for(int i=1;i<=d;i++)
          {
              cout<<" "<<a[i];
          }
      }



  };



int main(void)
{
    arr_ay ob1;
    int choose;
    int arr[100];

    for(; ;)
    {
        cout<<"\n1.insert\n2.delete\n3.exit\n";

        cin>>choose;

        if(choose==1)
        {
            ob1.ins(arr);
            ob1.display();
        }


          if(choose==2)
        {
            ob1.del();
            ob1.display();
        }


               if(choose==3)
              break;
    }
    return 0;
}
