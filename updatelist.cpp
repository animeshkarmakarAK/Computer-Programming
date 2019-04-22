#include<bits/stdc++.h>

using namespace std;

struct node{
int serial;
int value;
struct node *next;

};node *start = NULL , *current_node = NULL;


void makeListI(int value){

    if(start == NULL){

        start = new node();
        start->value = value;
        start->serial = 1;
        start->next = NULL;
        current_node = start;
    }else{

        node *temp ;
        temp = new node();
        temp->serial +=1;
        temp->value = value;
        temp->next = NULL;
        current_node->next = temp;
        temp = current_node;


    }

}

void displayList(){

node *temp = new node();
temp = start;

while(temp!= NULL){
    cout<<temp->value<<endl;
    temp = temp->next;
}

}

int main(){

int value;

while(cin>>value){
    makeListI(value);
}

}
