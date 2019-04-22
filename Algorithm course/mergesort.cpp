#include<iostream>
#include<conio.h>

using namespace std;

int a[100];
int n;
int temp[sizeof (int )];
int mergesort(int ,int );
int merge(int,int,int);
int display();


int merge(int low,int mid,int high)
{
    int l=low;
    int m=mid+1;
    int h=high;
    int i=low;

    while(l<=mid && m<=high)
    {
        if(a[l]>a[m]){
            temp[i]=a[m];
            i++;
            m++;
        }

        else
        {
            temp[i]=a[l];
            i++;
            l++;
        }
    }

    if(m>=high)
        for(int i=l;i<=mid;i++)
    {
        temp[i]=a[l];
        l++;
    }
    if(l>=mid)
    for(int i=m;i<=high;i++)
    {
        temp[i]=a[m];
        m++;
    }

    for(int i=0;i<n;i++)
    {
        a[i]=temp[i];
    }
}
int mergesort(int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}

int display()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
int main()
{
    cout<<"Enter Size:";
    cin>>n;
    cout<<"\nEnter random value:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(0,n-1);
    display();
}
/*

#include <iostream>

using namespace std;

void merge(int*,int*,int,int,int);
void mergesort(int *a, int*b, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(int *a, int *b, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}

int main()
{
    int a[] = {12,10,43,23,-78,45,123,56,98,41,90};
    int num;

    num = sizeof(a)/sizeof(int);
    cout<<"num=:"<<num<<endl;;

    int b[num];

    mergesort(a,b,0,num-1);

    for(int i=0; i<num; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}*/









