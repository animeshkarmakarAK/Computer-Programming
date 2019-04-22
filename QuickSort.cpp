#include<iostream>

using namespace std;
#define SIZE 100
int a[SIZE];
int n;
class quicksort{
public:

      void quick(int start,int last)
        {
            if(start>last)
            return;
                int mid=part_ition(start,last);
                quick(start,mid-1);
                quick (mid+1,last);

        }




    int part_ition(int start,int last)
    {
       int  pv=a[last];
       int  p_in=start;
       int  i=start;

       for(int i=start;i<last;i++)
       {
           if(a[i]<pv)
           {
               swap(a[i],a[p_in]);
               p_in++;
           }
       }
       swap(a[p_in],pv);
        return p_in;

    }



    int display()
    {
                    cout<<"\n\n\n\t\tQUICKSORT";

        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
    }
};
int main()
{
quicksort ob;


        cout<<"Enter no. of items:";
        cin>>n;
        cout<<"\n\n\t\t";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
ob.quick(1,n-1);
ob.display();
}
