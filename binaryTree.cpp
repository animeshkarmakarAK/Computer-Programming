#include<bits/stdc++.h>

using namespace std;

struct node{
int data ;
int id;
struct node *next;
}*start = NULL,*current;

void makeNode(int x)
{
    if(start == NULL)
    {
     struct node *newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     //cout<<temp->data;
     newnode->id = 1;
     newnode->next=NULL;
     start=newnode;
     current = newnode;
    }
    else{
           struct node *newnode = new node ;
            struct node *tmp = new node;
            tmp = current;
            while(tmp->next != NULL){
                tmp = tmp->next;
            }
            newnode->data = x;
            newnode->id  = current->id + 1;
            newnode->next = NULL;
            current->next = newnode;
            current = newnode;
    }


};


int display()
{
    struct node *tempnode;
    tempnode=(struct node*)malloc(sizeof(struct node));
    tempnode=start;
    if(tempnode==NULL)
    {
        cout<<"list empty";

    }
    else{
            while(tempnode!=NULL){
        cout<<tempnode->data<<"->";
        //cout<<tempnode->id<<"->";
         tempnode=tempnode->next;
            }
    }
    cout<<"end of node"<<endl;
}

int command(int position)
{
    struct node *tmp = new node;
    tmp = start;
    //bool found = false;
    while(tmp->id != position)
    {
        if(tmp -> id == position){
            int key = tmp->data;
            cout<<key<<endl;
                while(tmp->next != NULL){
                    tmp->id = tmp->id - 1;
                    tmp = tmp -> next;
                    current = tmp;
                }
            return key;
           // found = true;
        }
        else
            tmp = tmp->next;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    while(n--){
            int id;
        cin>>id;
    makeNode(id);
    display();
    }

    while(m--){
        char c;
        int key;

        cin>>c>>key;

        if(c == 'a')
            makeNode(key);
        else if(c == 'c'){
        int result = command(key);
        cout<<"id:"<<result<<endl;
        }
    }

}
