#include<bits/stdc++.h>

using namespace std;

#define tolerance 0.0001

double f(double x)
{
    return pow(x,3)+2*x-1;
}

void secant(double a, double b)
{
    int n = 0;
    double xrr;
    double xr;
    double c;

    if(f(a)*f(b)<0){
    do{
      xr = (a*f(b)-b*f(a))/(f(b)-f(a));

        double c = f(a)*f(xr);

        //update the variable
        b= a;
       b=xr;
        cout<<n<<endl;
        ++n;

        if(c==0)
            break;
        xrr = (a*f(b) - b*f(a))/(f(b)-f(a));

    }while(fabs(xrr-xr)>tolerance);

    cout<<"The root is : "<<xr<<endl;
    cout<<"No. of iteration : "<<n<<endl;
    }else cout<<" can't find a root in the given interval "<<endl;
}

int main()
{
    double a,b;
    cin>>a>>b;
    cout<<endl;
    secant(a,b);

    return 0;

}
