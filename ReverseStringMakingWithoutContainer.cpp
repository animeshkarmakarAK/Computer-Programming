/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string a;
    cin>>a;
    reverse(a.begin(),a.end());
    cout<<a<<endl;
stack<char>st;
char c;
int t;
cin>>t;
while(t--){
while(c = getchar() ,c != '\n'){
st.push(c);
}
while(!st.empty()){
    cout<<st.top();
    st.pop();
}
cout<<endl;
}
return 0;
}*/


#include <iostream>
using namespace std;

int *bit;
int n;
void constructFenwick(int idx, int value){
    while(idx <= n){
        bit[idx] += value;
        idx += idx & (-idx);
    }
}

int getSum(){
    int idx = n;
    int sum = 0;
    while(idx >0){
        sum += bit[idx];
        idx -= idx & (-idx);

    }
    return sum;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;

	int numArray[n];   // Define an array of four integers
        int i;
	// Get inputs for the array elements
	for (i=0; i<n; i++) {
    	cin >> numArray[i];
	}


    bit = new int(5);
    for(int i=0 ; i<n; i++){
        constructFenwick(i+1,numArray[i]*numArray[i]);
    }


    cout<<getSum()<<endl;

    	int L,R;

	// Get L and R from the user
	cin >> L >> R;
	// Write here the logic to print all integers between L and R

 	while(L<=R)
	{
	    cout<<L<<"\t";
	    ++L;
	}

}
