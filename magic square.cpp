#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,k,l;
    int a[20][20];
    cout<<"No. of row && column:";
    cin>>n;

    cout<<"Modulus\n\n";
    for(int i=1;i<=25;i++)
    {
        cout<<i<<"%5="<<i%5<<endl;
    }

   /*if(n%2==0)
    {
        cout<<"\nN is even"<<endl;
        k=1;l=1;
    }

    else
    {
        cout<<"\n N is odd"<<endl;
        k=1;
        l=n/2+1;
    }

    for(int i=2;i<=n*n;i++)
    {
        if(k==1 || l>1 ||l<n)
            {
              k=n;
              l+=l;
              a[k][l]=i;
              k--;
              l++;
            }

    }
    if(k>1||k<n||l==n)
    {
        a[]
    }*/
    int matrix[20][20];
    int nsqr=n*n;
    int i=0;
    int j=n/2;

  for (int k=1; k<=nsqr; ++k)
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0)
    {
      i += 2;
      j--;
    }
    else
    {
      if (j==n)
        j -= n;
      else if (i<0)
        i += n;
    }
  }
cout<<"Magic square\n..................................................\n";
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
    printf("%7d",matrix[i][j]);
}
      cout<<"\n\n";
  }
}
