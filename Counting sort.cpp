#include <iostream>


using namespace std;

int main()
{
    int arr[10],n,select,count;
    int aux[10];
    cout<<"No. of item:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }

    for(int i=1;i<=n;i++)
        for(int j=1;j<+n-i;j++)
    {

        if(arr[i]==arr[j])
        {
            count+=count;
        }
    }
}

