#include<bits/stdc++.h>

using namespace std;

struct node{
 int value;
 struct node *left, *right;

};


void display(deque<int>&d)
{
    deque<int> :: iterator it;
    for(it = d.begin(); it != d.end();++it){
        cout<<'\t'<<*it;
        cout<<endl;
    }
}

int main()
{

    deque<int>d;
    d.clear();
    int t;
    cin>>t;

   while(t--){
        int n,m;
         cin>>n>>m;

      while(m--){
          string a;
        getline(cin,a);

        //if(q.size() !=n){

               if(a.compare(0,8,"pushLeft") == 0)
               {
                   if(d.size()!=n){

                   int no = int (a[a.size()] )- 48;
                   cout<<no;
                   d.push_front(no);
                  // cout<<"Pushed in left: "<<no<<endl;
                  display(d);
                   }else
                   cout<<"queue is full"<<endl;

               }

                if(a.compare(0,9,"pushRight") == 0)
               {
                   if(d.size() != n){
                   int l = a.size();
                   char ch = a[l-1];
                   int no = int (ch) - 48;
                   d.push_back(no);
                   display(d);
                   }else
                     cout<<"queue is full"<<endl;

               }

              if(a.compare("popLeft") == 0){
                    if(!d.empty()){
                     d.pop_front();
                     display(d);
                    }
                    else
                        cout<<"queue is empty"<<endl;
              }

              if(a.compare("popRight") == 0){
                    if(!d.empty()){
                     d.pop_back();
                     display(d);
                    }
                    else
                        cout<<"queue is empty"<<endl;
              }
       // }
        }
   }
   }


