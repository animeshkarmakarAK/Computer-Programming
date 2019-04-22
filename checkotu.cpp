#include<bits/stdc++.h>

using namespace std;

struct node{
int serial;
int value;
struct node *next;

};node *start = NULL , *current_node = NULL;


void makeListI(int value){

    if(start==NULL){

        start = new node();
        start->value = value;
        start->serial = 1;
        start->next = NULL;
        current_node = start;
    }else{

        node *temp ;
        temp = new node();
        current_node->next = temp;
        temp->serial = current_node->serial + 1;
        temp->value = value;
        temp->next = NULL;
        current_node = temp;



    }

}

void displayList(){

node *temp = new node();
temp = start;

while(temp!= NULL){
    cout<<temp->value<<" serial: "<<temp->serial;
    temp = temp->next;
}
cout<<endl;
}

int main(){

int value;

while(cin>>value){
        cout<<"1/ Enter value"<<endl;
        cout<<"2/ Display List"<<endl;
        cout<<"3/ exit"<<endl;
    makeListI(value);
    displayList();
}

}


