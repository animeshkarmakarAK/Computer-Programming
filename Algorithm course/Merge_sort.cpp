#include<bits/stdc++.h>

using namespace std;

#define size 100
void createArray();
int n;
int a[size];
int temp[size];

void createArray()
{
    cout<<"No. of elements:";
    cin>>n;
    if(n>size)
        cout<<"invalid size";

    cout<<"\nInput random variable:";
    for(int i=0;i<n;i++)
        cin>>a[i];
}

int mergeArray(int f,int m,int l)
{
    int f_it=f;
    int l_it=l;
    int m_it=m+1;
    int i=f;

    while(f_it<=m && m_it<=l)
    {
        if(a[f_it]>a[m_it])
        {
            temp[i++]=a[m_it++];

        }
        else{
            temp[i++]=a[f_it++];
        }


    }
    while(f_it<m)
    {
        temp[i++]=a[f_it++];
    }
    while(m_it<l)
    {
        temp[i++]=a[m_it++];
    }

    for(int i=0;i<n;i++)
    {
        a[i]=temp[i];
    }
}


int mergeSort(int first,int last)
{

  if(first<last)
  {
      int mid=(first+last)/2;
      mergeSort(first,mid);
      mergeSort(mid+1,last);
      mergeArray(first,mid,last);
  }

}

void display()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<temp[i];
    }
}


int main()
{
    createArray();
    mergeSort(0,n-1);
    display();
}
