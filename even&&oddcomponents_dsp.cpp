#include<bits/stdc++.h>

using namespace std;

//Even and odd Component
//even(t)=(x(t)+x(-t))/2  odd(t)=(x(t)-x(-t))/2
map<int,double>mymap;

int main()
{


    int x_start,x_end,i,j,temp;
    int x_size,z_start,z_end,z_size;
    double x[100],xn[100],xN[100],e[100],o[100];
    printf("Enter starting point of signal: ");
    scanf("%d",&x_start);
    printf("Enter ending point of signal: ");
    scanf("%d",&x_end);

    if(abs(x_start)<x_end)
    {
        z_start=x_end*(-1);
        z_end=x_end;
        z_size=z_end-z_start+1;
        temp=abs(z_end-x_start);

        for(i=0;i<z_size;i++)
        {
            if(i<temp)
                xn[i]=0;
                else
            scanf("%lf",&xn[i]);

        }
          for(i=0;i<z_size;i++)
          {
              printf("%0.1lf ",xn[i]);
          }



    }
    else    if(abs(x_start)>x_end)
        {
            // printf("ll");
            //abs(x_start)>x_end
            z_start=x_start;
            z_end=x_start*(-1);
            z_size=z_end-z_start+1;
           // printf("%d",z_size);
            temp=abs(z_end-x_end);


        for(i=0;i<z_size;i++)
        {
            if(i<z_size-temp)
            scanf("%lf",&xn[i]);
            else
            xn[i]=0;

        }
          for(i=0;i<z_size;i++)
          {
              printf("%0.1lf ",xn[i]);
          }



    }
    else
    {
        z_size=x_end-x_start+1;
        for(i=0;i<z_size;i++)
        {

            scanf("%lf",&xn[i]);


        }
        for(i=0;i<z_size;i++)
          {
              printf("%0.1lf ",xn[i]);
          }

    }
    printf("\n");
    //reflection
    j=z_size-1;
    for(i=0;i<z_size;i++)
    {
        xN[i]=xn[j];
        j--;
    }

    printf("\nAfter reflecting : \n");
    for(i=0;i<z_size;i++)
    {
        printf("%0.1lf ",xN[i]);
    }

    //even_odd
    for(i=0;i<=z_size;i++)
    {
        e[i]=(xn[i]+xN[i])/2;
        o[i]=(xn[i]-xN[i])/2;
    }

    printf("\neven :");
     for(i=0;i<=z_size;i++)
    {
       printf("%0.1lf ",e[i]);
    }

    printf("\nodd :");
     for(i=0;i<=z_size;i++)
    {
       printf("%0.1lf ",o[i]);
    }
  return 0;
}




