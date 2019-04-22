#include<bits/stdc++.h>

using namespace std;

vector< vector<int> >v(10000);

int check(int v)
{

}

void drunk()
{
 //map<string,int>mymap;
int no_of_drink,assign,test;

cin>>test;
while(test--){
    v.clear();
    assign = 0;
         map<string,int>mymap;
        mymap.clear();
cin>>no_of_drink;
for(int i=0;i<no_of_drink;i++)
{
char s1[100],s2[100];
cin>>s1>>s2;
if(mymap.find(s1)==mymap.end()){
printf("Mapping %s with %d\n",s1,assign);
mymap[s1]=assign++;
}
if(mymap.find(s2)==mymap.end()) {
printf("Mapping %s with %d\n",s2,assign);
mymap[s2]=assign++;
}
}

v[mymap[s1]].push_back(mymap[s2]);



cout<<"size = "<<mymap.size()<<endl;
}
}

int main()
{
   /* map<string , int>drunkMap;
    string a,b;
    int pre, cases = 1,t;

    drunkMap["soda"] = 0;
    drunkMap["water"] = 1;
    drunkMap["wine"] = 2;

    bool drunk;

    cin>>t;
    while(t--){

            cin>>pre;

            drunk = true;
    for(int i = 0; i<pre; ++i){
        cin>>a>>b;

        if(drunkMap[a] > drunkMap[b]){
        //drunkOrNot[i] = 0;
        drunk = false;
        }
       // else
           // drunkOrNot[i] = 1;
    }

    /*drunk = true;
     for(int i = 0; i<pre; ++i){
        if(drunkOrNot[i] == 0)
              drunk = false;
           // printf("Case %d: ",case++)
     }

     if(drunk == false)
        cout<<"Case "<<cases++<<": No"<<endl;
        else
        cout<<"Case "<<cases++<<": Yes"<<endl;
    } */

    drunk();

return 0;
}
