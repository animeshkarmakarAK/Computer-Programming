#include<bits/stdc++.h>


using namespace std;


void node()
{

    map<string,int>mymap;
int edge,assign=0;
cin>>edge;
for(int i=0;i<edge;i++)
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
int u=mymap[s1];
int v=mymap[s2];
cout<<"Edge: "<<u<<" "<<v<<endl;
}
}

int main()
{
    map<int , int > mymap;//First int value type / Second int map index type referring

    int input[] = {-103,1,134565589,134565589,-103,66666668,132555332,66666668,-103,1,-2};
    int assign = 0,compressed[100], c = 0, n = sizeof(input)/sizeof(input[0]);

    for(int i = 0; i<n; ++i){
        int x = input[i];
        if(mymap.find(x) == mymap.end()){
            mymap[x] = assign;
            cout<<"Mapping "<<assign<<" with "<<x<<endl;
            ++assign;
        }

        x = mymap[x];
        compressed[ c++ ] = x;

    }
    printf("compressed array\n");
    for (int i = 0; i < n; ++i){
        printf("%d",compressed[i]);
        cout<<" ";

    }

    node();
}
