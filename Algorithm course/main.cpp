#include <iostream>
#include<conio.h>

using namespace std;

#define MAX 100
int n;
int a[MAX];
void get();
void quicksort(int ,int );
int partition(int ,int);
void display();


void get()
{
    cout<<"\n Enter no. of value to merge:";
    cin>>n;
    if(n<=MAX)
    {
        cout<<"\n Enter random value:"<<endl;
        for(int i=0;i<n;i++){
        cout<<"\t";
            cin>>a[i];
        }
    }

    else
        cout<<"\n\tINVALID NO.\n";
}

void quicksort(int low,int high)
{
    if(low<high)
    {
        int mid=partition (low,high);
        quicksort(low,mid-1);
        quicksort(mid+1,high);

    }
}

int partition(int low,int high)
{
    int pivot=a[low];
    int p_index=low;
   // int i=low;
    //int j=high;

    for(int k=low+1;k<=high;k++)
    {
        if (a[k]<pivot)
        {
             p_index++;

            swap(a[p_index],a[k]);


        }
    }
    swap(a[p_index],a[low]);
    return p_index;
}

void display()
{
    cout<<"\n\n\t\t";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
int main()
{
 get();
 quicksort(0,n-1);
 display();
    return 0;
}
