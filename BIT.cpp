#include<bits/stdc++.h>

using namespace std;

//you give money so u have to update array
//and here have to subtract money
//int arr[100];
//int biTree[100];
const int N = 1e5;

int update(int idx, int value, int n,int biTree[]){
    //idx+= 1;
   while(idx <= n){
     biTree[idx] += value;
     idx += (idx & (-idx));
   }
}


int give(int i, int n,int arr[],int biTree[])
{
    update(i+1,-arr[i],n,biTree);
    arr[i+1] = 0;
 /* int money = arr[i];
  //cout<<money<<endl;
   while(i < n){
    biTree[i]-= money;
    i += (i & -i);
   }

   return money;*/
}

void add(int idx,int value, int n,int arr[],int bitree[]){

idx += 1;
arr[idx] += value;
update(idx,value,n,bitree);

}


int sum(int s_idx , int e_idx,int biTree[]){
int s = 0;
s_idx += 1;
e_idx += 1;
while(e_idx >= s_idx){
    s += biTree[e_idx];
    e_idx -= (e_idx & (-e_idx));
}
return s;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t,case_no = 0,n,q;
cin>>t;
while(t--){
        cout<<"Case "<<++case_no<<": "<<endl;
        cin>>n>>q;

 //array making
 int biTree[N+1];
int arr[N];

memset(biTree , 0 , sizeof(biTree));
memset(arr,0,sizeof(arr));
 for(int i = 0; i<n; ++i){
    cin>>arr[i];
   //constructBitree(i, arr[i],n);
   update(i+1,arr[i],n,biTree);
 }



 /* for(int i = 1; i<=n; ++i)
        cout<<biTree[i]<<"\t";
   cout<<endl;
   */
  // Bit doesnot work on 0 remember the graph of shafayet vai for this cause it's start from 1

while(q--){
 int comm;
 cin>>comm;
 int i,v,j;
 switch(comm){
 case 1: cin>>i;
       // give(i,n,arr,biTree);
        cout<<arr[i]<<endl;
        update(i+1,-arr[i],n,biTree);
          arr[i] = 0;

        break;
case 2: cin>>i>>v;
        arr[i] += v;
        i += 1;
        update(i,v,n,biTree);
        //add(i,v,n,arr,biTree);
        break;
case 3:
    cin>>i>>j;
    cout<<sum(i,j,biTree)<<endl;
    break;
 }
}
}
return 0;
}
