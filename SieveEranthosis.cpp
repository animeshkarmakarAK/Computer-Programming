#include<bits/stdc++.h>

using namespace std;
#define N 1000000
#define rep(i,k,n) for(int i = int(k);i<=int(n);i++)
bool status[1100002];

void display()
{
for(int i=3;i<=N;i+=2){
    if(status[i] == 0)
        cout<<i<<"\t";
}

}

#define MAX 100000000
#define LMT 10000

unsigned flag[MAX>>6];

#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))

void primeGenerating()
{
    bool prime;
    rep(i,2,MAX)
    {
        prime = true;
       rep(j,i+1,sqrt(i))
       {
           if(i%j == 0)
            prime = false;

       }
       if(prime == true)
       cout<<i<<"\t";
    }
}

void bitSeiveDisplay()
{
    for (int i = 3; i <= MAX; i += 2)
        if (!ifc(i))
            printf("%d ", i);
}
#define ull uint64_t
ull n;
void sieve() {
    ull i, j, k;
    for(i=3; i<n; i+=2)
        if(!ifc(i))
            for(j=i*i, k=i<<1; j<n; j+=k)
                isc(j);

      bitSeiveDisplay();
      if(!ifc(n))
        cout<<"yes";
}

/*bool sieve()
{
    int sq = sqrt(N);
    for(int i = 4; i<=N; i += 2)
        status[i] = 1;

    for(int i = 3; i<=sq; i+=2){
        if(status[i] == 0){
            for(int j = i*i; j<=N; j+=i)
                status[i] = 1;
        }
    }

    status[1] = 1;
    display();
}*/


int main()
{
    cin>>n;
   sieve();
   memset(status,0,sizeof status);
   //primeGenerating(); // normal way to generate prime
   return 0;
}
