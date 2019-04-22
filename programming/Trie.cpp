#include<bits/stdc++.h>

using namespace std;

string a;
 struct node{

 bool endmark;
 node *next[26+1];

 node(){
 endmark = false;
 memset(next,0,sizeof(next));
 }
 }*root;
 void insert(string a)
 {
     node *curr;
     curr= root;
     for(int i=0;i<a.size();++i)
     {
         int id=a[i]-'a';
      if(curr->next[id]==NULL){
        curr->next[id]=new node();
      }
      curr=curr->next[id];

     }
     curr->endmark=true;
 }

bool search(string a){
 node *curr;
 curr=root;

 for(int i=0;i<a.size();++i)
    {
    int id=a[i]-'a';

    if(curr->next[id]==NULL)
        {
          return false;
        }
    curr=curr->next[id];
    }
 return curr->endmark;

 }

 void del(node *curr)
 {
  for(int i=0;i<26;i++)
    if(curr->next[i])
        del(curr->next[i]);

    delete(curr);

 }

 void prefix(node *curr)
 {
     //string a;
     for(int i=0;i<26;i++)
     {
         if(curr->next[i]!=NULL){
                char c= char(i+'a');
            a.push_back(c);
            if((curr->next[i])->endmark == true){
              for(int j=0;j<26;j++)
            {
               if((curr->next[i])->next[j] !=NULL )
               cout<<a<<endl;
                a.clear();
            }
            }
                //cout<<a;
            prefix(curr);
         }
     }
 }


int main()
{
    root = new node();
    string a;
    cout<<"No of words: ";
    int n;
    cin>>n;
    while(n--){
    cin>>a;
    insert(a);
    }

    cout<<"\n QUERY:    ";
    cout<<"no of query: ";
    cin>>n;
    while(n--){
        string b;
        cin>>b;
        if(search(b))
            cout<<"FOUND"<<endl;
        else
            cout<<"NOT FOUND"<<endl;
    }
   // prefix(root);
   // del(root);
}
