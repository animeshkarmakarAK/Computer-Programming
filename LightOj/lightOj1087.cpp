#include<bits/stdc++.h>

using namespace std;

/*struct node{
int data;
node *next;

};

int createNode(){


}

int main(){
int t;
cin>>t;
for(t--){
 int n,k;


}


}*/



int main()
{
    vector<int>v;
    int t;
    cin>>t;
    printf("\n");
    while(t--){

        int n,k;
        cin>>n>>k;
        while(n--){
                int data;
            cin>>data;
            v.push_back(data);
        }

        while(k--){

            char command;
            int value;
            cin>>command>>value;
            if(command=='a'){
                cout<<"\n"<<value;
                v.push_back(value);
                }
            if(command=='c'){
                    --value;
                    if(value>v.size()){
                        cout<<"\n none";
                    }

           // vector<int> ::iterator i;
            //int count=0;
               // for(int i=0;i<=v.size();++i){
                   // if(i==(--value)){
                            cout<<v[value];
                        v.erase(v.begin()+value);
                    }



        }
    }
}
