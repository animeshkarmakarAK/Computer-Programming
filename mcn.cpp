
#include<iostream>
#include <conio.h>

using namespace std;
int k=1;
int const MAX=100;
int A[MAX];
int N;
class quick
{public:
void get();
void quick_sort(int ,int);
int partition(int , int);
void display();
};
void quick::get()
{cout<<"\n\n How many values you want to sort --> ";
 cin>>N;
 if(N>MAX)
{cout<<"\n\n \t Maximum number of values is "<<MAX<<" so try again"<<endl;
 getche();
 get();
}
 cout<<"\n\t\t Put "<<N<<" random values..\n\n";
 for(int i=0;i<N;i++)
{cin>>A[i];}
};
void quick::quick_sort(int LEFT, int RIGHT){
cout<<"\n\n\n\t\t at"<<k;
display();
k++;
{if(LEFT>=RIGHT)return;
 int MIDDLE=partition(LEFT,RIGHT);
 quick_sort(LEFT,MIDDLE-1);
 quick_sort(MIDDLE+1,RIGHT);
}
}
int quick::partition(int LEFT, int RIGHT)
{int X=A[LEFT];
 int i=LEFT;
 for(int j=LEFT+1;j<=RIGHT;j++)
{if(A[j]<X)
{i++;
 int temp=A[i];
 A[i]=A[j];
 A[j]=temp;
}
}
 int temp=A[i];
 A[i]=A[LEFT];
 A[LEFT]=temp;
 return i;
}
void quick::display()
{
//    system("cls");
 cout<<"\n\n\n\n\t\t\t\t Sorted List\n\n";
 cout<<"\t\t\t\t(QUICK SORT)\n\n\n";
 for(int i=0;i<N;i++)
{cout<<A[i]<<"\t";}
}
int main()
{
 quick obj;
 obj.get();
 obj.quick_sort(0,N-1);
 obj.display();
}
