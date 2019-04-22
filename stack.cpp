#include<iostream>//have some problem
#define SIZE 10
using namespace std;

class stack
{
    int tos;
    int stck[SIZE];
    public:

    int init()
    {
        tos=0;
    }
    int push( int x)
    {

    {
        if( tos==SIZE)
            cout<<"stack is full";
        return stck[tos];
    }
    stck[tos]=x;
    tos++;

    }

    int pop()
    {

    {
        if(tos==0)
            cout<<"stack is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}
int pu()
{
    for(int i=0;i<tos;i++)
        cout<<stck[i]<<" ";
}
};


int main(void)
{
    stack s1;
    int choose_no;
    int f;
            s1.init();
    for(; ;){
        cout<<"1.insert\n2.delete\n3.exit\n";
    cin>>choose_no;
    if(choose_no==1)
{


      cout<<"please enter no:";
      cin>>f;
       s1.push(f);
       s1.pu();
       }



       if(choose_no==2)
    {


      s1.pop();
      s1.pu();

    }

       if(choose_no==3)
       {
           break;
       }
}

       return 0;
};

