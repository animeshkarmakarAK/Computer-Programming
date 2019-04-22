#include<bits/stdc++.h>

using namespace std;

struct node{

bool endmark;
node *next[10];

node(){
endmark = false;
memset(next,0,sizeof (next));
}
}*root;



void insert(string a)
{
 node *curr;
 curr = root;
 for(int i=0;i<a.size();++i){
    int id = a[i]-48;
    if(curr->next[id] == NULL){
        curr->next[id] = new node();
    }
    curr = curr->next[id];
 }
 curr->endmark = true;
}

bool  prefix_check(string a)
{
    node *curr;
    curr = root;
   // cout<<a<<endl;

    for(int i=0;i<a.size();i++)
    {
        int id = a[i]-48;
        if(curr->next[id]!= NULL){

            if(curr->endmark == false && (i+1)<a.size()){
                return true;
            }

              curr = curr->next[id];
        }
    }
    return false;

}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

    string a;
    vector<string>v;

    int counter = 0;
    bool check = false;

    int t,n;
    cin>>t;



 // first:
        while(t--)
        {
         v.clear();
         cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }

     // its time to check prefix
    for(int i=0;i<v.size();++i){
           // cout<<"vector elements: " <<v[i]<<endl;
       check = prefix_check(v[i]);
       if(check == true)
       {
           cout<<"Case "<<++counter<<": YES"<<endl;
         //  goto first;
       }
    }
       cout<<"Case "<<++counter<<": NO"<<endl;

    }
return 0;
}
