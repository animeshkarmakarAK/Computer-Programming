#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<math.h>

using namespace std;

int main()
{
    /*char s[50];
    scanf("%[^\n]s",s);
        for(int i=0;i!='\0';i++)
           cout<<s[i];
    for(int i=0;i!='\0';i++)
    {
        s[i]=toupper(s[i]);

    }
        for(int i=0;i!='\0';i++)
            cout<<s[i];
            */
            char ch[30];
            char s;
            scanf("%[^\n]s",s);
            for(int i=0;ch[i]!='\0';i++)
            {
                s=ch[i];
                if(islower(s))
                {
                    s=toupper(s);
                }
            }
                        for(int i=0;ch[i]!='\0';i++)
                            cout<<ch[i];

    return 0;
}
