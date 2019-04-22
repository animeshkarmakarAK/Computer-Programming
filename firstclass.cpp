// this is my first c program
/* this is
my first progmar  */

#include<bits/stdc++.h> // Link section

using namespace std;

int main(){

    int my_array[100];

    printf("koita value thakbe : ");
    int n;
    scanf("%d",&n);
    printf("\n");

    printf("input your array: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&my_array[i]);
    }

       for(int i = 0; i<n; i++){
        printf("%d\t",my_array[i]);
    }

    printf("\nMAXIMUM VALUE OF MY ARRAY : ");

    int mx = 0;
    for(int i = 0; i<n; i++){
        if(my_array[i] > mx)
            mx = my_array[i];

    }

    printf("%d",mx);



return 0;
}
