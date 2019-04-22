#include<iostream>
int main()

{
    long int a;
    std::cin>>a;
    int sum=0;

    if(a>0){
    for(int i=a;i>=1;i--)
    {
        sum=sum+i;
    }
    }
    else
        for(int i=a;i<=1;i++)
    {
        sum=sum+i;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
