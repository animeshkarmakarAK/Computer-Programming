
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s;
char ch;
int counter=0;
while(cin>>ch){
    if(ch=='"'){

        ++counter;
        if(counter%2==0){
             ch=' '' ';
            printf(ch);
        }else{
        ch='``';
        printf(ch);
        }

    }
    cout<<ch;

}
}

/*#include<stdio.h>
#include<string.h>
int main()
{
long int i,count=0,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    if(s[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",s[i]);
    }
printf("\n");
}
return 0;
}*/

















