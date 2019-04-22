#include<bits/stdc++.h>

using namespace std;

int arr_size(int arr[])
{
    return sizeof(arr)/sizeof(arr[0]);
}

int parent(int i)
{
    if(i%2 == 0)
        return i/2 -1;
    else return i/2;
}

int left(int i)
{
    return 2*i+1;
}

int right(int i)
{
    return 2*i+2;
}

void swap(int *left , int *right)
{
    int *tmp = left;
    left = right;
    right = tmp;
}

int min_heapify(int arr[], int n , int i)
{
   int l = left(i);
   int r = right(i);
   int smallest = i;

   if(l<n && arr[i] > arr[l])
    smallest = l;
   else if(r < n && arr[i] > arr[r])
    smallest = r;
   else {
    if(smallest != i)
    {
        swap(arr[i] , arr[smallest]);

        min_heapify(arr,n,smallest);
    }
   }


}


void convertToMinHeap(int arr[],int n )
{
    for(int i = n -2 /2 ; i>0 ; --i)
        min_heapify(arr,n,i);
}

void print_arr(int arr[], int n)
{
    for(int i = 0; i<n; i++)
        cout<<arr[i] << " ";
    cout<<endl;
}

int main()
{
    int arr[] = {2,1,4,3,5,6};
    int n = arr_size(arr);

    convertToMinHeap(arr,n);
    print_arr(arr,n);

    return 0;

}
