#include<bits/stdc++.h>

using namespace std;

struct List
{
    int val;
    struct List *next;
    //List(int x) : val(x), next(NULL) {}
}*start = NULL;

struct List *curr = new List;
void insert_in_list(int val)
{
    struct List *node = new List;
    node->val = val;
    node->next = NULL;

    if(start == NULL){
        start = node;
        curr = node;
    }
    else {
         curr->next = node;
         curr = node;
    }

}

void display_list()
{
        //displaying list
    struct List *tmp = new List;
    tmp = start;
    while(tmp)
    {
        cout<<tmp->val<<"->";
        tmp = tmp->next;
    }
    cout<<endl;

}

void remove_duplicate()
{
    map<int,bool>mymap;

    struct List *tmp = new List;
    struct List *current = new List;
    struct List *prev = new List;

    tmp = start;

    while(tmp)
    {
        if(mymap[tmp->val])
        {
            if(tmp->next)
            prev->next = tmp->next;
            else
                prev->next = NULL;
        }
        else{
            prev = tmp;
            mymap[tmp->val] = true;
        }
        tmp = tmp->next;
    }
}

void remove_dupicates_entirely()
{
    map<int,bool>mymap;
    struct List *tmp = new List;
    tmp = start;

    while(tmp)
    {
      if(mymap[tmp->val])
      {
          // as long as getting start value as duplicate
          while(start->val == tmp->val)
            start = start->next;

          tmp = start;
          while(tmp)
          {

          }
      }
      else{
        mymap[tmp->val] = true;
      }
    }
}

// -- MAIN FUNCTION -- //
int main()
{
    struct List *r = new List;
    struct List *p = new List;
    p->val = 2;
    p->next = NULL;
    r->next = p;
    cout<<r->next;
    return 0;

    int n;
    cout<<"No of value you want to insert in list ::";
    cin>>n;

    int val;
    while(n--)
    cin>>val,
    insert_in_list(val),display_list();

    cout<<"After removing duplicate values"<<endl;
    remove_duplicate();
    display_list();

    remove_dupicates_entirely();
    return 0;
}
