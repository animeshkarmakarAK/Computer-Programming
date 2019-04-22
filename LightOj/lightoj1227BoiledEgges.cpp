#include<bits/stdc++.h>

using namespace std ;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

int t, case_no = 0;
cin>>t;
//int  arr[10];
while(t--){

     ++case_no;
  //  memset(arr,0,sizeof(arr));

    int n,p,q;
    cin>>n>>p>>q;

    int weight = 0;
    int counter = 0;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
        weight += arr[i];
        if(weight <= q && counter < p){
            ++counter;

        }

        //cout<<arr[i]<<endl;
    }
       cout<<"Case "<<case_no<<": "<<counter<<endl;
  /*

   // sort(arr,arr+n);


    int weight = arr[0];
    int counter = 0;

    for(int i = 0 ; i<p; ++i){
        if(weight <= q){
            counter++;
            weight += arr[i+1];
        }
    }

    cout<<"Case "<<case_no<<": "<<counter<<endl;

}*/


}
return 0;
}



