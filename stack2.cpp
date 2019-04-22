#include<iostream>
using namespace std;
#define SIZE 10
class stack{
int stc[SIZE];
int tos;
public:
    void init()
    {
        tos=0;
    }

    int push(int a)

    {

        if(tos==SIZE)
        {
            cout<<"\nstack is full.No space to insert";
            return 0;

        }


      for(int i=tos;i<=0;i--)
      {
          if(i==0)break;
          stc[i+1]=stc[i];
          cout<<stc[i];
      }
      stc[0]=a;
      tos++;

      }

    int pop()
    {
        if(tos==0){
            cout<<"stack is empty.No item to remove";
            return 0;
            }
            if(tos==1)
                cout<<"[ ]=Empty!\n";
            tos--;
            //return  stc[tos];
    }
};
int main()
{
    stack s1;
    int i,b,n; int j=0;
    int a[100];
    s1.init();
    for(; ;)
    {
        cout<<"\n\n1.insert\n2.delete\n3.exit\n\n";
        cin>>n;
        if(n==1){
        cout<<"Enter value to insert:";
        cin>>b;
        a[j++]=b;
        s1.push(b);
       // for(int i=0;i<j;i++)
        //cout<<"\n["<<i<<"]="<<a[i];
    }

            if(n==2){
            s1.pop();
           if(j!=0){
            a[j--];

              for(int i=0;i<j;i++)
       cout<<"\n["<<i<<"]"<<a[i];}
            }


            if(n==3)
                break;


}
}


