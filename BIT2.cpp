#include<bits/stdc++.h>

using namespace std;

/*int *arr;
int *bit;

int update(int idx, int value,int n)
{
    arr[idx] += value ;
    //now update bit[]

    while(idx <= n){
        bit[idx] += value;
        idx = idx + (idx &(-idx));
    }
}

int sum(int init_idx, int end_idx){
 int s = 0;
while(end_idx > init_idx){
    s += bit[end_idx];
    end_idx -= end_idx & (-end_idx);
}
return s;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;

     arr = new int[n+1];
     bit = new int[n+1];

    for (int i = 1; i<=n; ++i){
        cin>>arr[i];
    }

     for (int i = 1; i<=n; ++i){
        cout<<arr[i]<<"\t";
    }

      for (int i = 1; i<=n; ++i){
       update(i,arr[i],n);
       }

         cout<<"Bit tree values"<<endl;
     for (int i = 1; i<=n; ++i){
        cout<<bit[i]<<"\t";
    }


    int comm,idx,value,init_idx,end_idx;
    while(q--){
    cin>>comm;

    switch(comm){
case 1: cin>>idx;
cout<<arr[idx]<<endl;
update(idx,-arr[idx],n);
break;

case 2:cin>>idx>>value;
cout<<update(idx,value,n)<<endl;
break;

case 3:
    cin>>init_idx>>end_idx;
    cout<<sum(init_idx,end_idx)<<endl;
    break;
    }
    }

    return 0;
}
*/

int getSum(int BITree[], int i , int j)
{
    int sum = 0;

   i += 1;
   j += 1;

    // Traverse ancestors of BITree[index]
    while (j >= i)
    {
        // Add current element of BITree to sum
        sum += BITree[i];

        // Move index to parent node in getSum View
        i-= i & (-i);
    }
    return sum;
}

// Updates a node in Binary Index Tree (BITree) at given index
// in BITree.  The given value 'val' is added to BITree[i] and
// all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;

    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
       // Add 'val' to current node of BI Tree
       BITree[index] += val;

       // Update index to that of parent in update View
       index += index & (-index);
    }
}

// Constructs and returns a Binary Indexed Tree for given
// array of size n.
int *constructBITree(int arr[], int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;

    // Store the actual values in BITree[] using update()
    for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, arr[i]);

    // Uncomment below lines to see contents of BITree[]
    //for (int i=1; i<=n; i++)
    //      cout << BITree[i] << " ";

    return BITree;
}



// Driver program to test above functions
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }

    int *BITree = constructBITree(arr, n);





    int comm,idx,value,init_idx,end_idx;

    while(q--){
    cin>>comm;

    switch(comm){
case 1: cin>>idx;
cout<<arr[idx]<<endl;
updateBIT(BITree, n, idx, -arr[idx]);
arr[idx] = 0;
break;

case 2:cin>>idx>>value;
updateBIT(BITree,n,idx,value);
break;

case 3:
    cin>>init_idx>>end_idx;
    cout<<getSum(BITree,init_idx,end_idx)<<endl;
    break;
    }
    }

    return 0;
}

/*
#include<bits/stdc++.h>

using namespace std;


//you give money so u have to update array
//and here have to subtract money
//int arr[100];
//int biTree[100];

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

   return money;
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

int t,case_no = 0,n,q;
scanf("%d", &t);
while(t--){
       //cout<<"Case "<<++case_no<<": "<<endl;
        //cin>>n>>q;
        printf("Case %d: \n",++case_no);
        scanf("%d%d", &n,&q);
 //array making
 int biTree[n+1];
int arr[n];

memset(biTree , 0 , sizeof(biTree));
memset(arr,0,sizeof(arr));
 for(int i = 0; i<n; ++i){
    scanf("%d", &arr[i]);
   //constructBitree(i, arr[i],n);
   update(i+1,arr[i],n,biTree);
 }



 /* for(int i = 1; i<=n; ++i)
        cout<<biTree[i]<<"\t";
   cout<<endl;

  // Bit doesnot work on 0 remember the graph of shafayet vai for this cause it's start from 1

while(q--){
 int comm;
 scanf("%d", &comm);
 int i,v,j;
 switch(comm){
 case 1: //cin>>i;
       // give(i,n,arr,biTree);
       scanf("%d", &i);
        printf("%d\n",arr[i]);
        update(i+1,-arr[i],n,biTree);
          arr[i] = 0;

        break;
case 2: scanf("%d%d", &i,&v);
        arr[i] += v;
        i += 1;
        update(i,v,n,biTree);
        //add(i,v,n,arr,biTree);
        break;
case 3:
    scanf("%d%d", &i,&j);
    printf("%d\n",sum(i,j,biTree));
    break;
 }
}
}
return 0;
}
*/

