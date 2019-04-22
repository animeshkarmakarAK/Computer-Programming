#include<bits/stdc++.h>

using namespace std;


int used[20],number[20];
#define MAX 100

int p[MAX];
vector<char>v;
#define rep(i,n) for(int i = 0; i<int(n); i++)
#define for2(i,n) for(int i = 1; i<= int(n) ; i++)

int n;
int counter = 0;
string a ;
vector< vector<char> > per;
int idx = 0;
void permute()
{
    if(v.size() == n)
    {
        //generate permute
       /* rep(j,v.size())
        cout<<v[j]<<"\t";
        cout<<endl;
*/
       per.push_back(v);
        counter++;
        return;
    }
    else
    {
         for2(i,n)
         {
             //cout<<i<<endl;
             if(p[i])
                continue;
             p[i] = 1;
             v.push_back(a[i-1]);
             //cout<<i<<endl;
             permute();
             //cout<<"return work:: i = "<<i<<endl;
             p[i] = 0;
             v.pop_back();
         }

    }

}

void permutation(int at , int n){

if(at == n+1){
    for (int i = 1 ; i<=n ; ++i){
    cout<<number[i]<<endl;
    return ;
    }

    for(int i = 1 ; i<= n ; ++i){
        used[i] = 1;
        number[at] = i ;
        permutation(at+1,n);
        used[i] = 0;

    }
}
}

void fac(int n){
long long x = 1;
long long m = 77777;
for (int i = 2; i <= n ;i++) {
x = (x*i)%m;
cout<<x<<endl;
}
cout << x << "\n";
}

int main(){
memset(p,0,sizeof(p));
cin>>a;
n = a.size();
permute();
//cout<<counter<<endl;
//fac(n);

rep(i,per.size()){
rep(j,per[i].size())
cout<<per[i][j]<<"\t";
cout<<endl;
}
return 0;
}
