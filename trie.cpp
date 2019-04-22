#include<bits/stdc++.h>


using namespace std;

struct node {
bool endmark;
struct node *next[26+1];

node(){
for(int i=0; i<26 ;++i){
    next[i] = NULL;
}
endmark = false;
}

}*root;

void ins(string str)
{
    node* curr = root;
for(int i=0; i<str.size(); ++i){
    int id = int(str[i]) - 'a';
    if(curr->next[id] == NULL)
    {
        curr->next[id] = new node;
        curr = curr->next[id];
    }
}

}


int main()
{
  string a;
  cin>>a;

  ins(string a);
}
