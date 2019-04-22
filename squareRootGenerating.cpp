#include<iostream>

using namespace std;
#define MINDIFF 2.25e-308
int sqrt(int a)
{

}

double sqroot(double square)
{
    double root=square/3, last, diff=1;
    if (square <= 0) return 0;
    do {
        last = root;
        root = (root + square / root) / 2;
        diff = root - last;
    } while (diff > MINDIFF || diff < -MINDIFF);
    return root;
}

/*double sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}*/

string check(double a,double sqoor)
{
    if(int(sqoor) == int(a * a))
        return "it's correct";
    else return "not correct";

}

int main()
{

 double a;
 cin>>a;
 double b = sqroot(a) ;
 cout<<b<<endl;
 cout<<check(b,a)<<endl;
 return 0;
}
