#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstdio>
#include<cstring>
#include<vector>
#include<sstream>

using namespace std;

int main()
{
  /* char s[]="a56bb";
   char ss[50];
   vector<int>v;


   int x;
    x=atoi(&s[1]);
    cout<<x;

    char ch;
    int n;
    int i=0;

    cin>>ss;
    printf("%s",ss);
    int j=0;
    while(ss[j]!='\0'){
        if(isspace(ss[j]))
        {
            j++;
            n=atoi(&ss[j]);
            v.push_back(n);
        }
    }
for(int i=0;i!=v.size();i++)
{
    cout<<v[i]<<endl;
}

char s[100];
scanf("%[^\n]s",s);
printf("%s",s);
return 0;*/

string input;
getline(cin,input);
stringstream stream(input);

while(1){
   int n;
   stream >> n;
   if(!stream)
      break;
   std::cout << "Found integer: " << n << "\n";
}

}
