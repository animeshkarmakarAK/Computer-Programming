#include<bits/stdc++.h>

using namespace std;

struct data{
string name;
int phone_no;
struct data *next = NULL;
};

int hash_function(string name)
{
    int key = 0;

for(int i = 0; i<=name.size(); ++i){
    key += name[i];
}

return key % 100;

}

int main(){

//Hashing

int cap = 100;
//int hash_table[100];
//memset(hash_table , 0 , 100);

struct data *dataset[cap];


cout<<"CAPACITY : 100"<<endl;

for(; ;){

cout<<"\t\t1. insert to Hash Table"<<endl;
cout<<"\t\t2. search Hash table"<<endl;
cout<<"\t\t3. Exit"<<endl;

int n;
cin>>n;

if (n == 1){
        string name;
        int phn;
cin>>name ;
cin>>phn;

/* data obj;
obj.name = name;
obj.phone_no = phn;*/

//call hash function
int key = hash_function(name);



if(dataset[key]->next == NULL){
    dataset[key]->name = name;
    dataset[key]->phone_no = phn;
    dataset[key]->next = NULL;
    cout<<"workout"<<endl;
}
else{
    struct data *newdata = new(data);
    newdata->name = name;
    newdata->phone_no = phn;
    dataset[key]->next = newdata;
    newdata->next = NULL;
}
}

//search section
if(n == 2)
{
    string name;
    cin>>name;
    int key = hash_function(name);
    bool found = false;

    if(dataset[key]->name == name){
    cout<<dataset[key]->phone_no<<endl;
    found = true;
    }
else{
    while(dataset[key]->next != NULL){
        dataset[key] = dataset[key]->next;
        if(dataset[key]->name == name)
            cout<<dataset[key]->phone_no<<endl;
            found = true;
    }

    if(found == false)
        cout<<"Not in directory"<<endl;
}
}

if(n == 3)
    break;

}
return 0;
}


