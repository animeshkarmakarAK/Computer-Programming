#include<bits/stdc++.h>

using namespace std;

bool even(int x){
if(x%2 == 0)
    return true;
else
    return false;
}



/*int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);

int l,h;

long int maxLS;
long int ls;
int value;

while(scanf("%d %d",&l,&h)){

 if(l==0 && h ==0)
    break;


maxLS = 0;
ls = 0;

for(int i = l; i<=h;i++ ){
        int tmp = i;
        ls = 0;
    while(tmp>1){
            ++ls;
        if(even(tmp))
            tmp = tmp/2;
        else
            tmp = 3*tmp + 1;
    }

    long int tmpls = 0;
     if(maxLS<ls)
        tmpls = ls;
    //see the change of maxLS
    if (maxLS != tmpls){
        value = i;
        maxLS = tmpls;
    }


}
 cout<<"Between "<< l <<" and "<< h<<","<< value<<" generates the longest sequence of "<<maxLS<< "values."<<endl;
 maxLS = 0;
 ls = 0;

}

return 0;
}*/


int main(){

int l,h;
char c;
while(scanf(" %c",&c)!='y'){
    cout<<c<<endl;
}
	return 0;


}
