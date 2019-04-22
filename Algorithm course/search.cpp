#include<bits/stdc++.h>

//using namespace std;

int main()
{
    /*
    const char s1[]="I am Animesh ";
    const char s2[]="am";

    int n1=sizeof(s1)-1;
    int n2=sizeof(s2)-1;

    cout<<sizeof(n2)/sizeof(int);

    cout<<"n1 & n2="<<n1<<" "<<n2<<endl;

    const char *p=search(s1,s1+n1,s2,s2+n2);

    printf("Found subsequence \%s\ at character %d of sequence %s\n",s2,p-s1,s1);*/

    std::cout<<"\n\t\tBinary searching using STL"<<std::endl;

    char A[]={'1','3','2','6','7','4','9','0'};

    //for binary search the array must be at sorting situation

    const int n=sizeof(A)/sizeof(char);
    std::cout<<"N="<<n<<std::endl<<"sizeof char="<<sizeof(char)<<" sizeof A="<<sizeof (A);
    std::sort(A,A+n);

    for(int i=1;i<=10;i++)
    {
       std:: cout<<"\n\nSearching for "<<i<<" "<<std::binary_search(A,A+n,i+48)?"found":"not found";
    }
    int c;
    c<<=1;
    std::cout<<"\n\n"<< c;

    std::cout<<"\n\n\t\t Gretest common divisor"<<std::endl;
}
