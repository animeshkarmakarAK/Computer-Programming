#include<bits/stdc++.h>

using namespace std;

int prime[100000],nprime=1;
int mark[100000];

int sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;
    mark[1]=1;

    for(int i=4;i<=n;i+=2)
        mark[i]=1;

    prime[nprime++]=2;
    for(int i=3;i<=n;i+=2)
    if(!mark[i]){
        prime[nprime++]=i;
        if(i<=limit)
        {
            for(j=i*i;j<=n;j+=i*2)
            {
                mark[j]=1;
            }
        }
    }
}

void display(int n)
{
   for(int i=1;i<=n;i++){
    cout<<" "<<prime[i];

   }

}

int main()
{
    int n;
    cin>>n;
    sieve(n);
    display(n);
    return 0;
}

