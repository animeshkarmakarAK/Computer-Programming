#include<bits/stdc++.h>

using namespace std;

struct data {

string date;
string des ;

};

int stringToInt(string a)
{
   int k = atoi(a.c_str());
   return k;
}
int main(){

struct data data1;

//cin>>data1.date;

// open a file

FILE *f;
 char filename[50] = "C:/Users/Animesh/Desktop/week.txt";
if((f = fopen(filename, "r")) == NULL){
    cout<<"Error in file opened "<<endl;
    exit(1);
}

char ch ;
while((ch = fgetc(f))!= EOF){
    cout<<ch<<endl;
    if (ch == ' ')
        break;
}




}
