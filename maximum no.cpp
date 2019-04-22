#include<iostream>

int main(void)
{
    int n;
    unsigned long int a[100];
    int min;unsigned long m=100000;
    std::cin>>n;
    if(n>=1&&n<=20)
    {
        for(int i=1;i<=n;i++){
            std::cin>>a[i];
        }


        for(int i=1;i<=n;i++){

                for(int j=i+1;j<=n;j++)
        {
            if(a[i]<=100000){
            if(a[i]>a[j]){
                min=a[i]-a[j];
                if(min<m)
            m=min;
            else m;
            }

            else
                min=a[j]-a[i];
                if(min<m)
            m=min;
            else m;
        }
        }
    }
    }
    std::cout<<m<<std::endl;
    return 0;
}
