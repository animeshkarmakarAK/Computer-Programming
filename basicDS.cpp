#include<bits/stdc++.h>

using namespace std;

int add(int num)// call by value
{
    num = num + num ;
    return num;
}

int addd(int *n) // call by reference
{
    *n += *n;
}

int main()
{
    int num = 2;
    addd(&num);
    cout<<num;
}
