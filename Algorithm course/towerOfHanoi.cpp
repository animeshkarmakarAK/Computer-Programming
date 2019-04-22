#include<bits/stdc++.h>

using namespace std;

void tower(int n,int start,int aux,int end){
    printf("\nstart:%d\naux:%d\nend:%d\n",start,aux,end);
if(n>0){
tower(n-1,start,end,aux);
printf("%d--->%d\n",start,end);
tower(n-1,aux,start,end);
}

}
int main()
{
   int n;
   cout<<"No. of disks";
   cin>> n;
   tower(n,1,2,3);
}
