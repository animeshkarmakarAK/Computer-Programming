#include<iostream>//THER IS SOME PROBLEM
#include<vector>    //RUN AND SEE
#include<cstdio>
using namespace std;
int main(void)
{
char f[1000];int j=0,n,d=1;
    vector<string>v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        printf("%d.",d++);
      cin>>f;
        v.push_back(f);

    cout<<"\n"<<v[j++][1]<<"\n";  //akgane ami single character niye kaj korte parci
                                  //and this so much cool
    }
    for(int i=1;i<=n;i++)
        for(int j=0;j<v[i].size();j++){

        if(v[i][0]=='A'&&v[i][1]=='C'||v[i][2]=='G'||v[i][3]=='T')


    printf("case:%d=yes",i);
    else
printf("case:%d=no",i);}


}
