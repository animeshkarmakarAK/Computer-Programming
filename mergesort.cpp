#include<iostream>

using namespace std;

 int arr[20];
    int n;
int mergearray(int , int , int );
void mergesort(int ,int );
void display();


 int   mergearray(int le ,int mi, int ri)
    {
        cout<<"\n\n\t\t RECEIVED"<<endl;
       int l=le;
       int in=le;

        int m=mi+1;
        int temp [20];

        for(int i=le;i<ri;i++)
        {
            temp[i]=arr[i];
        }

        while(l<=mi && m<=ri)
        {
            if(temp[l]<=temp[m])
            {
                arr[in]=temp[l];
                l++;
                in++;
            }
            else
            {
                arr[in]=temp[m];
                in++;
                m++;
            }
        }


        while(l<=mi)
        {
            arr[in]=temp[l];
            in++;
            l++;
        }

        while(m<=ri)
        {
            arr[in]=temp[m];
            m++;
            in++;
        }
//return arr[n-1];
    }


    void mergesort(int left, int right)
    {
        if(left<right)
            cout<<"\nleft:"<<left<<"\nright:"<<right;
        {
            int mid=(left+right)/2;
            mergesort(left,mid);
            mergesort(mid+1,right);
            mergearray(left,mid,right);
        }
    }





    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\t\t"<< arr[i];
        }
    }

int main()
{
    cout<<"\n\n\t\t //create an array//";
    cin>>n;

    for(int i=0;i<n;i++){
                    cin>>arr[i];
                    cout<<"\n"<<arr[i];
    }

        mergesort(0,n-1);
        display();
}
