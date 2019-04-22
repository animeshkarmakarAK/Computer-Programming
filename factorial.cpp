#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cctype>


using namespace std;

int main()
{
    char *s;
    int d=0,m=1,i=1,k,temp;
    scanf("%[^\n]",s);
    int n=atoi(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(ispunct(s[i]))
            k++;
    }
    temp=k;
    while(n%k!=0)

    {
        m*=n;
        n=n-i*k;
        i++;
    }
}
