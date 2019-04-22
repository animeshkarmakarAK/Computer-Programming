#include<bits/stdc++.h>

using namespace std;

vector<int>v;

bool isprime(int n){

for(int i=3;i*i<=n;i+=2)
{
    if(n%i == 0)
        return false;

}
return true;

}

int  primeFactor(int n)
{
    for(int i=2;isprime(i)&& i<=n;i+=2){
            if(n == 1)
            return 1;
        if(n%i == 0)
            n = n/i;
            v.push_back(i);
            primeFactor(n);
    }
}

void display()
{
   int i = 0;
   while(i!=v.size()){
    i++;
    cout<<v[i]<<endl;
   }
}

// Sieve of Eratosthenes  algorithm  for prime finding in 0(nlogn) time complexity
int a[100000000];
int prime_count=0;
void find_prime(int n)
{
    for(int i=2;i<=n;++i){
        if(a[i])
            continue;
        for(int u=2*i ;u<=n;u+=i)
            a[u] = i;

    }
}

void prime_no_display(int n)
{
    for(int i=2;i<=n;++i)
    {
        if(a[i])
            continue;

            cout<<i<<", ";
            ++prime_count;

    }
    cout<<endl;
    cout<<"Total prime numbers : "<<prime_count<<endl;
}

int main()
{
    int n;
    cin>>n;

  //  primeFactor(n);
  //  display();

  // no of prime numbers in  a given Range  which is given by n
  memset(a,0,sizeof(a));

  find_prime(n);
  prime_no_display(n);

    return 0;

}
