#include<iostream>
#include<cstdio>
#include<ctype.h>

using namespace std;

int main()
{
char s[50];
int i=0;
while(s[i]!=EOF)
{
    scanf("%s",&s[i]);
    i++;
}

for(int i=0;s[i]!='\0';i++)
{
    cout<<s[i];
}




}
