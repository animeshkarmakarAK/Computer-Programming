

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    int counter=0;
    scanf("%d",&t);

    while(t)
    {
        float n1,n2,n3;
        scanf("%f %f %f",&n1,&n2,&n3);
        //printf("\n");

        if((n2-n1) == (n3-n2)&& n2/n1 == n3/n2){
         printf("Case %d: Both\n",++counter);

        }

       else  if((n2-n1) == (n3-n2)){
           printf("Case %d: Arithmetic Progression\n",++counter);
        }
      else  if(n2/n1 == n3/n2){
         printf("Case %d: Geometric Progression\n",++counter);

        }

        else
                 printf("Case %d: None\n",++counter);
        --t;
    }
   return 0;
}
