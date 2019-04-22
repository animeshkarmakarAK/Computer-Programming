#include<bits/stdc++.h>

using namespace std;
#define PI acos(-1)
int main()
{
    int cases,n,m,caseno=0;
    double R,r;
    scanf("%d",&cases);
    while(cases--){
        scanf("%lf %d",&R,&n);
        r=(sin(PI/n)*R) /(sin(PI/n)+1);
        m=int(r);

        //output term
        double k=r/m;
        if(k==1)
            printf("Case %d: %0.lf",++caseno,r);
        else
            printf("Case %d: %.10lf",++caseno,r);

       printf("\n");
    }
}
