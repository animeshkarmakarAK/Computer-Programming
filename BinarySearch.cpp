#include<bits/stdc++.h>

using namespace std;

int sear(int arr[],int value){
int end = sizeof(arr)/sizeof(arr[0]) - 1;
int begin = 0;
int idx = 0;
while(begin <= end){

    int mid = (begin + end)/2;

    if(arr[mid] == value)
    {
        idx = mid;
        break;
    }
    else if(arr[mid] > value)
        end = mid - 1;
    else if(arr[mid] < value)
        begin = mid + 1;

}
return idx;
}

int searching(int arr[],int value, int begi,int en)
{
    int mid = (begi + en)/2;

    if(begi >= en )
        return 0;


    if(arr[mid] == value)
        return mid;
    else if (arr[mid] > value)
        searching (arr,value,0,mid-1);
    else
        searching(arr,value,mid+1,en);
}

int main()
{
  int arr[] = {12,13,14,15,57,69,72,89,98};
  int n = sizeof(arr)/sizeof(arr[0]);

  int value;
  while(cin>>value,value != 0)
    //cout<<searching(arr,value,0,n-1)<<endl;
    cout<<sear(arr,value);

  return 0;
}
